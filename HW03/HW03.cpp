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
			
			//cout << "Line " << line << "  " << "Column " << column << "   " << output << endl;

		}



	}

	
}


*/



//HW03 P2 - Money Class (????)



//HW03 A1 - Pretty Text


int main() {

	int column = 0;
	int line = 0;
	std::string goodline;

	std::vector<std::string> paragraphs;

	std::ifstream token("leagues.txt", std::fstream::in);


	while (std::getline(token, goodline)) {

		std::stringstream newStream(goodline);
		std::string output;
		line++;

		column = 0;



		while (newStream >> output) {

			column = column + output.length();

			//cout << "Line " << line << "  " << "Column " << column << "   " << output << endl;

			paragraphs.push_back(output);

			if (paragraphs.size() % 100 == 0) {
				for (int i = 0; i < paragraphs.size(); i++) {
					cout << paragraphs[i] << " ";
				}
				cout << endl;
				paragraphs.clear();
			}

		}



	}


}
