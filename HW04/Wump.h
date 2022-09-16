#pragma once
#ifndef WUMP_HPP
#define WUMP_HPP

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

const int rooms = 15;
int bats= 3;
int pits = 1;

int gameOver = -1;
struct Room
{
    std::vector<int>adjacent{ std::vector<int>(3) };
   
    bool bat = false;
    bool player = false;
    bool pit = false;
    bool wump = false;
};

class Player
{
    std::vector<int> nearby{ std::vector<int>(3) };
    int inRoom;
    void setAdjRooms();
public:
    void setCurrRoom(int r) { inRoom = r; setAdjRooms(); }

    int room() const { return inRoom; }
    int getAdj(int i) const { return nearby[i]; }
};

void Player::setAdjRooms()
{
    int t = 2 + 2 * (inRoom & 1);
    nearby[0] = rooms - 1 - inRoom;
    nearby[1] = (inRoom + t) % rooms;
    nearby[2] = (15 - t - inRoom) % rooms;
}

class Generator
{
    std::vector<Room> cave{ std::vector<Room>(20) };
    std::vector<int> vacant;

    Player p;

    void Wumpy();
    void setBats();
    void setPits();
    void addPlayer();

    void getPOS();
    int input();

    int movePlayer(int);
    int shoot(int target);
    void batLuck();
    int moveWump();
public:
    void generate();
    void play();
};


void Generator::Wumpy() // create not friend >:(
{
    int randVar = rand() % vacant.size();
    cave[vacant[randVar]].wump = true;
    vacant.erase(vacant.begin() + randVar);
}

void Generator::setBats() // create guano
{
    for (int i = 0; i < bats; ++i) {
        int r = rand() % vacant.size();
        cave[vacant[r]].bat = true;
        vacant.erase(vacant.begin() + r);
    }
}

void Generator::setPits() // create sinkhole
{
    for (int i = 0; i < pits; ++i) {
        int randVar = rand() % vacant.size();
        cave[vacant[randVar]].pit = true;
        vacant.erase(vacant.begin() + randVar);
    }
}



void Generator::addPlayer() // create friend

{
    int randVar = rand() % vacant.size();
    
    p.setCurrRoom(vacant[randVar]);
    cave[vacant[randVar]].player = true;

    vacant.erase(vacant.begin() + randVar);
    for (int i = 0; i <= 3; ++i)
        vacant.erase(std::find(vacant.begin(), vacant.end(), p.getAdj(i)));
}


int Generator::movePlayer(int pos)
{
    cave[p.room()].player = false;
    cave[pos].player = true;
    vacant.push_back(p.room());
    p.setCurrRoom(pos);

    if (cave[p.room()].bat) {
        std::cout << "A bat lifts you away!" << std::endl;
        batLuck();
        return 0;
    }
    if (cave[p.room()].pit) {
        std::cout << "You fell for 45 minutes. The aftermath was unpleasant. :(" << std::endl;
        return gameOver;
    }
    if (cave[p.room()].wump) {
        std::cout << "You've been wumped :(." << std::endl;
        return gameOver;
    }

}

int Generator::moveWump()//move wump

{
    int r = rand() % 3;
    int p = 0;
    for (; !(cave[p].wump); p++); 

    cave[p].wump = false;


    if ((cave[p].wump && !(cave[p].bat)) || (cave[p].wump && !(cave[p].pit))) {
        vacant.push_back(p);
    }


    cave[cave[p].adjacent[r]].wump = true;
    if (cave[cave[p].adjacent[r]].player) {
        std::cout << "You've been wumped :(" << std::endl;
        return gameOver;
    }


    return 0;
}

int Generator::shoot(int pew){
    if (cave[pew].wump) {
        std::cout << "WUMP DEAD - KILL CONFIRMED" << std::endl;
        return gameOver;

    }

    else if (cave[p.getAdj(0)].wump || cave[p.getAdj(1)].wump || cave[p.getAdj(2)].wump)
        return moveWump();
}

void Generator::batLuck() // trigger after bat is hit
{
    int r = rand() % vacant.size();
    cave[p.room()].player = false;
    cave[vacant[r]].player = true;

    vacant.push_back(p.room());

    p.setCurrRoom(vacant[r]);

    vacant.erase(vacant.begin() + r);
}

void Generator::generate() // plays god
{
    for (int i = 0; i < rooms; ++i) {
        int t = 2 + 2 * (i & 1);

        cave[i].adjacent[0] = rooms - 1 - i;
        cave[i].adjacent[1] = (t + i) % rooms;
        cave[i].adjacent[2] = (15 - t + i) % rooms;

        vacant.push_back(i);
    }

    //add the boys
    addPlayer();
    Wumpy();
    setBats();
    setPits();


    for (int i = 0; i < 3; ++i)
        vacant.push_back(p.getAdj(i));
}

void Generator::play()
{
    getPOS();
    while (input() != gameOver) {
        getPOS();
    }
}

int Generator::input()
{
    char c = 0;
    int r = -1;
    std::cout << "Type m(number) to move or s(number) to shoot." << std::endl << std::endl;
    while (1) {
        std::cout << "Enter command: ";
        if (std::cin >> c >> r) { break; }
    }
    return (c == 'm') ? movePlayer(r) : shoot(r);
}

void Generator::getPOS()
{
    std::cout << "Room:  " << p.room() << std::endl;
    std::cout << "Adjacent rooms are " << p.getAdj(0) << "- " << p.getAdj(1)
        << "- " << p.getAdj(2) << std::endl;

    if (cave[p.getAdj(0)].bat || cave[p.getAdj(1)].bat || cave[p.getAdj(2)].bat) {
        std::cout << "I hear a bat." << std::endl;

}

    if (cave[p.getAdj(0)].pit || cave[p.getAdj(1)].pit || cave[p.getAdj(2)].pit) {
        std::cout << "I feel a draft." << std::endl;
    }

    if (cave[p.getAdj(0)].wump || cave[p.getAdj(1)].wump || cave[p.getAdj(2)].wump) {
        std::cout << "I smell the wumpus." << std::endl;
    }
}


#endif // !WUMP_HPP

