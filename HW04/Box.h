#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;



class Box {

private:


	int _height = 1;
	int _width = 1;


public:


	virtual std::string type() = 0;

	virtual void print(std::ostream& os) const {} // Virtual print



	int getWidth() {
		return(_width);
	}

	int getHeight() {

		return(_height);

	}

	void setWidth(int);
	void setHeight(int);

}; // End baseBox




class FilledBox : public Box { // Prints Filled box

public:

	FilledBox() {};

	std::string type() {
		cout << "Filled:";
		cout << endl;
		return std::string("Filled:");
		
	}

	void print()  {
		for (int j = 0; j < Box::getHeight(); j++) {

			for (int i = 0; i < Box::getWidth(); i++) {
				cout << "*";
			}
			cout << endl;
		}
	}


}; // end Filled




class HollowBox : public Box { // Prints a Hollow box
public:

	HollowBox() {};

	std::string type() {
		cout << "Hollow:";
		cout << endl;
		return std::string("Hollow:");
		cout << endl;
	}

	void print() {
		for (int j = 1; j <= Box::getHeight(); j++) {
			

			if (j == 1 || j == Box::getHeight()) {
				for (int i = 0; i < Box::getWidth(); i++) {
					cout << "*";
				}
				cout << endl;
			}

			else {
				cout << "*";
				for (int k = 0; k < Box::getWidth() - 2; k++) {
					cout << " ";
				}
				cout << "*";
				cout << endl;
			}

		}

	}

}; // end Hollow





class CheckeredBox : public Box { // Prints Checkered box
public:


	CheckeredBox() {};

	std::string type() {

		cout << "Checkered:";
		cout << endl;
		return std::string("Checkered:");
		cout << endl;
	}
	
	void print() {

		for (int i = 0; i < Box::getHeight(); i++) {

			for (int j = 0; j < Box::getWidth(); j++) {

				if (i % 2 == 0) {
					cout << "*" << " ";
					j++;
				}
				else {
					cout << " " << "*";
					j++;
				}


			}
			cout << endl;

		}



	}

}; // End Checker


std::ostream& operator<<(std::ostream& os, const Box& b) {
	b.print(os);
	return(os);
}



#endif // !BOX_HPP

