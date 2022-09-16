#include <iostream>
#include <string>
#include <vector>
#include "Box.h"

using std::cout;
using std::cin;
using std::endl;



// HW04 P1 - Boxes

/*
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

} */


// HW04 A1 - Hunt the Wump
/*
#include <algorithm>
#include <random>
#include "Wump.h"




int main()
{
	srand(unsigned(time(0)));
	Map game;
	game.generate();
	game.play();
	//game.printState();
}



*/



// HW04 A2 - Speed Coding


#include "Streams.h"
#include "Containers.h"
#include "Memory.h"

int main() {

	cout << "File test:   ";

	FileIO inOut;

	inOut.write("This just in, a new world record has been broken");

	inOut.read();


	cout << "\n\n\n\n";

	cout << "Vector Test:     " << std::endl << endl;
	VectorSpeedrun vs;

	vs.storage(1);
	vs.storage(5);
	vs.storage(11);
	vs.storage(56);
	vs.storage(8);

	vs.retrieve();

	vs.search(11);

	
	cout << "\n\n\n Heap Test: " << endl;
	Ptr ptr(new int());
	Ptr eee(new int());
	*eee = 400;
	*ptr = 20;
	cout << "Pointers currently exist: " << *eee << ", " << *ptr;


} 