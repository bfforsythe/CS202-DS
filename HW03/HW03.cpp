#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;

// HW03 P1

/*
int main() {

	int column = 0;
	int line = 0;
	std::string goodline;



	std::ifstream token("leagues.txt", std::fstream::in);


	while (std::getline(token, goodline)) {
	
		std::stringstream newStream(goodline);
		std::string output;
		line++;
		
		column = 0;



		while (newStream >>  output) {
		
		column = column + output.length();
			
			cout << "Line " << line << "  " << "Column " << column << "   " << output << endl;
		}



	}
}

*/