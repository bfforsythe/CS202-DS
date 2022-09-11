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
	fill.print();

	cout << endl;

	HollowBox hollow;
	hollow.setHeight(15);
	hollow.setWidth(7);
	hollow.print();


}