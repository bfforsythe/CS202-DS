#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::string;


// Lab 1 - Control Review

void functionCall(std::string aloha) {

	cout << aloha << "\n\n";


}


int main() {

	// functionCall

	cout << "Function call: ";

	functionCall("Aloha!");


	// if else

	int i = 0;
	int j = 1;

	if (i != j) {

		cout << "If Else: " << i << " and " << j << " are not equal" << "\n\n";

	}
	else {
		cout << "What numbers?";
	}
	

	// switch

	int NewSwitch = 2;
	switch (NewSwitch) {

	case 1:
		cout << "I'm having a lovely day";
		break;

	case 2:
		cout << "Switch: " << " I'm super tired!" << "\n\n";


	}


	//while loop

	int holder = 0;

		cout << "While: ";

		while (holder != 10) {
			cout << "A";
			holder++;
		}

		cout << "\n\n";


	// normal for

		cout << "For: ";

		for (int i = 0; i < 10; i++) {

			cout << "E";

	}

		cout << "\n\n";


	// do(while) loop

		int inc = 0;

		cout << "Do While: ";

		do {
			cout << "I";
			inc++;
		} while (inc < 10);

		cout << "\n\n";
	
	// ranged-based for


		std::vector<int> newVec = { 1,2,3,4,5,6,7,8,9,10 };

		cout << "Ranged Based For:";

		for (int i : newVec) {
			cout << i << " "; 
		}
}