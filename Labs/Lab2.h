#pragma once
#ifndef Lab2




#include<iostream>

class DefaultConst {

public:

	DefaultConst() {

		std::cout << "Default Constructor constructed";
	}



};




class ParamTest {

public:

	ParamTest(int alpha, int beta) {

		std::cout << "Param succeeded: Alpha: " << alpha << " Beta:" << beta << "\n";
	}

	~ParamTest() {
		cout << "ParamTest destroyed";
	}
};



class OtherConstruct {

	string x;
	int y;
	char z;

public:
	OtherConstruct(std::string test1, int test2, char letter1) {

		std::cout << "Other construct success:   String: " << test1 << "   integer: " << test2 << "   character: " << letter1 << "\n";

		x = test1;
		y = test2;
		z = letter1;

	}

	~OtherConstruct() {
		cout << "OtherConstruct Destroyed" << std::endl;
	}

	string getstring() { return(x); }
	int getY() { return(y); }
	char getZ() { return(z); }


};


class VectorConstruct {


public:

	VectorConstruct(int one, int two, int three, int four, int five) {

		std::vector<int> constructVec = { one,two,three,four,five };

		std::cout << "Constructed Vector: ";

		for (int i = 0; i < constructVec.size(); i++) {
			std::cout << constructVec.at(i) << " ";
		}
		cout << std::endl << std::endl;
	}

	~VectorConstruct() {
		cout << "VectorConstruct Destroyed" << "\n";
	}

};

#endif // !Lab2