#pragma once
#ifndef Lab9
#define Lab9

#include<iostream>
#include<fstream>

class Complex {

	int r;
	int c;

public:

	Complex operator+(Complex const& obj) {
		Complex res;
		res.r = r + obj.r;
		res.c = c + obj.c;
		return res;
	}


	Complex(double r, double c){


		cout << 1 + Complex(2, 3) << std::endl;
	
	}

	~Complex() {
		std::cout << "Complex Destructed";

	}



};


std::ostream& operator<<(std::ostream &, const Complex &complex){

	std::cout << complex;
}

int & operator+=(int&, const Complex& complex) {
	int o_additive;

	o_additive += complex;


}









#endif // !Lab9
