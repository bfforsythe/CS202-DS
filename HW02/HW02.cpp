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