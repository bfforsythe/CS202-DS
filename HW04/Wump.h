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

int playerState = 1;
int bat1 = 0, bat2 = 0, bat3 = 0;
int pit1 = 0, pit2 = 0;



class Generator {
public:

	// Cave generator
	
	void generate() {
		std::vector<int> cave;

		for (int z = 2; z <= 15; z++) {
			cave.push_back(z);
		}

		int n = cave.size();

		for (int i = 0; i < n - 1; i++)
		{
			int j = i + rand() % (n - i);
			std::swap(cave[i], cave[j]);
		}

		cave.insert(cave.begin(), 1);

		for (int y = 0; y < cave.size(); y++) {
			cout << cave.at(y) << ", ";
		}
		cout << endl;

	}
};


class PlayerHandle {
private:
	

public:

	void move(int roomNo) {

		playerState = roomNo;


	}


};


class Bits { // Class for Bats & Pits... Bits... get it?
private:

	int randomize(int rando) { // Creating this in private to clean up code below

		rando = rand() % 15 + 1;
		return(rando); 
	}

public:

	void randomBats() { // Creates random Bat Locations (NOTE: Bats can be on same space, if so, that's fine. ez game.
		cout << "Randomizing Bats" << endl;
		
		 bat1 = randomize(bat1);
		 bat2 = randomize(bat2);
		 bat3 = randomize(bat3);

		  cout << bat1 << " " << bat2 << " " << bat3;
		cout << "Bats Randomized" << endl;
	}




	void randomPits() { // THIS should check if bat and pit position are similar.


		cout << "Randomizing Pits \n";
		pit1 = rand() % 15 + 1;
		pit2 = rand() % 15 + 1; 
		

		while(pit1 == bat1 || pit1 == bat2 || pit1 == bat3) { pit1 = randomize(pit1); }
		while (pit2 == bat1 || pit2 == bat2 || pit2 == bat3) { pit2 = randomize(pit2); }
		
		cout << pit1 << ", " << pit2;
		cout << "Pits Randomized \n";

	}

};




#endif // !WUMP_HPP

