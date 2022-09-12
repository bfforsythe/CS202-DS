#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
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



// Lab 4 - Streams
/*
#include <fstream>


int main() {

	std::ofstream out;

	out.open("goodevening.txt", std::ios_base::app);

	std::cout << "Please Enter a Line of Text, and how many lines to add: ";

	int lines;
	std::string newText;

	cin >> newText >> lines;
	for (int i = 0; i < lines; i++) {

		out << newText;
		out << "\n";


	}



} 
*/



// Lab 5 Binary Files
/*
#include <fstream>


int main() {
	int integers;
	std::vector<int> dataVec;

	std::ifstream data;
	data.open("data.dat", std::ifstream::binary);

	while (data.read((char*)&integers,sizeof(integers))) {
		
		dataVec.push_back(integers);
	}

	cout << "The binary file contains: " << dataVec.size() << " integers. \n";

	int summand = 0;
	for (int i = 0; i < dataVec.size(); i++) {
		summand = summand + dataVec[i];
	}

	cout << "The sum of integers is: " << summand << std::endl;

	double average = 0;

	average = summand / dataVec.size();

	cout << "The average integer is: " << average << std::endl;


	return(0);
} */



// Lab 6 - Catch2

// Lab 6a - Optional Namespace


// Lab 7 - Intro to Overload (WIP)
/* #include "Lab7.h"

int main() {



} */



// Lab 8 - uses of Static

/*#include "Lab7.h"

int s_i = 0; // static 0, see header.
int Funk::objCount;

int main() {

	 // experiment 1

	//cout << s_i;




	// expirement 2

	Funk test1, test2;

	Funk::countObjects();
	


}
*/



// Lab 9 - Overload Arithmetic ( WIP )

/*
main() {

#include "Lab9.h"



}

*/


// Lab 10 - Exceptions

/*/
void functionC() {
	
	std::vector<int> vect;

}

void functionB() {
	cout << "Starting functionB()" << endl;
	functionC();
	cout << "Ending functionB()" << endl;
}

void functionA() {
	std::vector<int> vect;
	functionB();

	try {
		if (vect.size() == 0) {
			throw std::runtime_error("error - vector empty");
		}
	}
	catch (std::runtime_error &e){
		cout << "Caught an exception: " << e.what() << endl;
	}


}
int main() {
	cout << "Starting main()" << endl;
	functionA();
	cout << "Ended normally." << endl;
	return 0;
}

*/


// Lab 11 - Inheritance
/*
int main() {

	class Inherit {
		int variable = 0;
	public:
		
		Inherit() {
			cout << "Default Constructed for Inherit" << endl;
			variable = 5;
		}

		~Inherit() {
			cout << "Destructor Destructed for Inherit" << endl;
		}


	};

	
	class Child : private Inherit {

	public:
		Child() {
			cout << "Default Constructed for Child" << endl;
		}

		~Child() {
			cout << "Default Destructed for Child" << endl;
		}



	};

	Inherit();
	Child();
} */


// Lab 12 - Polymorphism
/*
class Base {
public:
	virtual void fooVirtual() const { cout << "Base class virtual function\n"; }
	void fooNotVirtual() const { cout << "Base class non-virtual function\n"; }
};

class Derived : public Base {
public:
	void fooVirtual() const override { cout << "Derived class virtual function\n"; }
	void fooNotVirtual() const { cout << "Derived class non-virtual function\n"; }
};

int main() {
	Base b;
	Derived d;

	//  1) A base class pointer to the base class object.
	Base* bPb = &b;

	//  2) A base class pointer to the derived class object.
	Base* bPd = &d;

	//  3) A derived class pointer to the derived class object.
	Derived* dPd = &d;
	//  4) A base class reference to the base class object.
	Base obj_base;
	Base* bRb = &obj_base;
	//  5) A base class reference to the derived class object.
	Derived obj_derived;
	Base* bRd = &obj_derived;
	//  6) A derived class reference to the derived class object.
	Derived obj_dtd;
	Derived* dRd = &obj_dtd;

	cout << "~Calling non-virtual function from Base class pointer to base: ";
	bPb->fooNotVirtual();

	cout << "~Calling virtual function from Base class pointer to base: ";
	bPb->fooVirtual();

	cout << "~Call non virtual from Base to Derived: ";
	bPd->fooNotVirtual(); // Polymorphed
	cout << "~Call virtual from Base to Derived: ";
	bPd->fooVirtual(); // Polymorphed

	cout << "~Call non virtual Derived to Derived: ";
	dPd->fooNotVirtual();
	cout << "~Call virtual Derived to Derived: ";
	dPd->fooVirtual();

	cout << "~Reference non virt Base-Base: ";
	bRb->fooNotVirtual();
	cout << "~Reference virt Base-Base: ";
	bRb->fooVirtual();
	
	cout << "~Reference non virt Base-Derive: ";
	bRd->fooNotVirtual(); // Polymorph
	cout << "~Reference virt Base-Derive: ";
	bRd->fooVirtual(); // Polymorph

	cout << "~Reference non virt Derive-Derive: ";
	dRd->fooNotVirtual();
	cout << "~Reference virt Derive-Derive: ";
	dRd->fooVirtual();

	//Call both functions from pointers 2-6

	return 0;

} */



// Lab 13 - Function Templates
/*
template<typename T>

auto twice(T x) {
	x = x + x;
	return(x);
	
}

template<const char *str>
struct cts {
	void p() { std::cout << str << str; }
};
 char cstring[] = "world";



int main() {
	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice(string("Hello")) << endl;

	cts<cstring> o;
	o.p();
} */



//Lab 14 Class Templates
/*
template<typename T>

class Wrapper {

public:
	Wrapper(T i) {}

	void print() {
		cout << i;
	}

	template<typename U>
	friend std::ostream& operator<<(std::ostream& os, const Wrapper<U>& x);
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Wrapper<T>& x) {
	x.print();
	return os;
}



int main() {

	Wrapper<int> w{ 2 };
	Wrapper<string>  s{ "Hello world!" };
	cout << w  << " " << s << endl;

} */


// Lab 16 Intermediate STL



/*
int main() {
	cout << "using std::mismatch:     ";
	std::vector<int> vector1 = { 1, 14, 89, 55 };
	std::vector<int> vector2 = { 1, 14, 65, 55 };

	std::pair<std::vector<int>::iterator,
	std::vector<int>::iterator > itr;

	itr = std::mismatch(vector1.begin(), vector1.end(), vector2.begin());

	cout << "Found mismatch -> " << *itr.first << ", " << * itr.second;


	cout << std::endl;

	cout << "using adjacent_find:     ";

	int array[] = { 5, 898, 2, 3, 55, 55, 8 };

	int n = sizeof(array) / sizeof(array[0]);

	int* it = std::adjacent_find(array, array + n);

	cout << "Adjacent's found -> " << *it;
	
} */



// Lab 17 - Recursion