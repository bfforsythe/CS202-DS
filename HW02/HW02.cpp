#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "catch.hpp"
using std::cout;
using std::cin;
using std::endl;


// Program 1 - List Testing

/*
struct Value {

	std::list<int> valList = { 1 , 10 , 5 , 9 , 13 };

	void ListReset() {
		valList = { 1, 10, 5, 9 , 13 };
	}

	void printList() {

		for (auto& printer : valList) {
			cout << printer << " ";
		}

		cout << std::endl;
	}

}Val;


int main() {

	// Queue : FIFO

	cout << "FIFO demonstration : ";

	Val.valList.push_back(3);
	Val.valList.pop_front();

	Val.printList();



	Val.ListReset();


	// Stack : LIFO

	cout << "LIFO demonstration: ";
	Val.valList.pop_back();
	Val.valList.push_back(3);

	Val.printList();




	Val.ListReset();


	// Insert & Find
	cout << "Insert & Find Demo: ";
	int searchTerm = 5;
	

	Val.valList.sort();

	

	for (std::list<int>::iterator itr_val = Val.valList.begin(); itr_val != Val.valList.end(); ++itr_val){
		
		if (*itr_val == searchTerm) {

			dupeFound = true;

			Val.valList.insert(itr_val, 3);
			Val.valList.erase(itr_val);
	
			itr_val = Val.valList.begin();
		}

		

	}
	Val.printList();
}


*/




// Program 2 - Memory Layout

/*int static_data;

void printPointer(int i) {
	int* iptr = &i;


	cout << "&i = " << iptr << " 'Code' Storage" << endl;
}

int main() {

	printPointer(1);

	int stack_data;

	if (&stack_data < &static_data) {
		cout << &stack_data <<" - Stack" <<  endl;
		cout << &static_data <<" - Static Global Variable" << endl;
	}

	cout << "Note: Free Store is dependent on system wide memory";

} */



// HW02 A1 - Lowercase Letters

/*

void to_lower(char* s) {

	for (int i = 0; i < 100; i++) {

		int c = s[i];

		if (isupper(c)) {
			
			s[i] = s[i] + 32;

		}
		
	}
	

}

int main() {

	char b[100] = "ThE fItNeSs GrAm PaCeR TeSt";

	to_lower(b);

	cout << b;

	return(0);
} */



// HW02A2 - Cave Spelunking
bool gameOver = false;

class Controller {  // This class controls initial generation and player movement
public:

	Controller(){}

	void generate(int move) {
		
		if (move == 1) {
			std::string room1Short = "Light behind you illuminates a deep cave, Continue?";
			std::string room1Long = "After descending the ladder from the surface, you are met with a cave. Rumor is that there is treasure, but nobody has ever come out alive";

			cout << room1Short;
		}
		if (move == 2) {
			std::string room2Short = "You go left and are met with a wall. You can feel a breeze behind it. There is also a light to your left";
			std::string room2Long = "You take a left Fork and are met with a straight, jet black wall. You can feel the air coming out from behind it, but there seems to be a light from your left";

			cout << room2Short;
		}
		if (move == 3) {
			std::string room3Short = "Going right, you're met with a large drop. There is a large boulder you could probably move";
			std::string room3Long = "Taking the right path you come to a gigantic atrium room with a large pit in the center. It seems like you may continue by dropping down. A glistening boulder is on the far side of the room, and upon closer inspection seems to be making noise.";

			cout << room3Short;
		}
		if (move == 4) {
			std::string room4Short = "Spiders! You run away (GAME OVER)";
			std::string room4Long = "Heaving the boulder reveals a terrible secret. Hundreds of little spiders come scurrying out from behind it, and as you are a well-known arachnophobe, you get the hell out of there (Game Over)";

			cout << room4Short;
			gameOver = true;
		}
	}

	void movement(int move = 1) {

		int room1 = 1, room2 = 2, room3 = 3, room4 = 4, room5 = 5, room6 = 6, room7 = 7, room8 = 8;

		int roomNumber;
		int player = 1;

		while (!gameOver) {

			


			cout << "Please choose a room to enter";
			cin >> roomNumber;

			switch (player) {
			case 1:
				if (roomNumber == 2) { move = 2;  }
				if (roomNumber == 3) { move = 3;  }
			case 2:
				if (roomNumber == 6) { move = 6;  }
				if (roomNumber == 7) { move = 7;  }
			case 3:
				if (roomNumber == 4) { move = 4;  }
				if (roomNumber == 5) { move = 5;  }
			case 5:
				if (roomNumber == 8) { move = 8;  }
			case 7:
				if (roomNumber == 7) { move = 7;  }
			}


		}
	}

	~Controller(){}
};


int main() {

	Controller game;
	game.movement(1);
	return(0);
}