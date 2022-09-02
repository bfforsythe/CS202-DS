#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::string;


// Lab 1 - Control Review
/*


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
*/



// Lab 2 - Constructors and Destructors
/*#include "Lab2.h"

int main() {

	DefaultConst();

	cout << std::endl << std::endl;


	ParamTest a(1, 2);

	cout << std::endl << std::endl;


	OtherConstruct b("Hello", 5, 'a');

	OtherConstruct c = b;
	cout << "Copied : " << " CopyString = " << c.getstring() << " copyInt = " << c.getY() << " copyChar = " << c.getZ();

	cout << std::endl << std::endl;


	VectorConstruct e(5, 6, 10, 2, 4);


} */



// Lab 3 - Smart Pointers
/* #include <memory>

class PointerTest {

public:

	PointerTest() {

		std::cout << " Pointer Created ";



	}

	~PointerTest() {

		std::cout << " Destroyed pointer ";
	}

	void Dummy(int test) {
		cout << test;
	}

};

int main() {

	
	// Raw Pointers

	//PointerTest* pointerarray = new PointerTest[4];			// This points to PointerTest, since it's not deleted, it can't be destroyed.
	//delete[] pointerarray;									// This allows the array to be destroyed




	// Unique Pointers

	// cout << "Unique pointer is created then deleted because of std::unique" << "\n\n";

	//std::unique_ptr<PointerTest> uniqPtr = std::make_unique<PointerTest>();


	//std::unique_ptr<PointerTest> uniqCopy = std::move(uniqPtr);								

	//cout << "\n This is a copy of the uniqPtr pointer: ";

	//uniqCopy->Dummy(1);

	//cout << std::endl; 


	
	// Shared Pointer

	std::shared_ptr<PointerTest> sharePtr = std::make_shared<PointerTest>();

	cout << "\nShare Pointers Remaining after Destruction: 1  (This is sharePtr)" << std::endl;


	{

		std::shared_ptr<PointerTest> ptr1;

		cout << "Share Pointers Remaining after Destruction: 0  (this is ptr1)" << std::endl;


	}


	return(0);
} */



// Lab 4 - Binary Files

#include <fstream>
#include <iostream>


int main() {
	std::ifstream goodeve;
	std::ofstream goodday;
	string output;

	goodeve.open("goodevening.txt");



	if (goodeve.is_open()) {


		while (!goodeve.eof()) {

			goodeve >> output;
			cout << output << " ";
		


		}
		goodeve.close();
	}

	goodday.open("goodevening.txt");

	goodday << "A good evening to you as well";

	goodday.close();



}