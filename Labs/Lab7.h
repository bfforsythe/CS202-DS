#pragma once

#ifndef Lab7
#define Lab7


#include <iostream>
#include <string>
#include <vector>


class Funk {

	int objectCounter;
	static int objCount;

public:
	
	static void construct() {

		std::string construction;
		construction = "Funk has been Constructed";
		std::cout << construction << std::endl;


	}

	static void countObjects() {

		cout << "count: " << objCount << std::endl;

	}

	Funk() {
		Funk::construct();

		objectCounter = objCount++;
	}




	~Funk() {
		std::cout << "Funk has been Destructed";
	}



}; // End of Funk :(







#endif // !Lab7

