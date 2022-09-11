#include <iostream>
#include <string>
#include <vector>
#include "Box.h"

using std::cout;
using std::cin;
using std::endl;


void Box::setWidth(int width) {
	_width = width;
}
void Box::setHeight(int height) {
	_height = height;
}





int main() {


	FilledBox fill;
	fill.setHeight(5);
	fill.setWidth(10);
	fill.type();
	fill.print();

	cout << endl;

	HollowBox hollow;
	hollow.setHeight(15);
	hollow.setWidth(7);
	hollow.type();
	hollow.print();

	CheckeredBox check;
	check.setHeight(4);
	check.setWidth(4);
	check.type();
	check.print(); 

}