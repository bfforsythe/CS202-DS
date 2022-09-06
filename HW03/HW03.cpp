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

void textPrinter(std::string fileName, int wrap) {
	int periodCounter = 0;
	std::string goodline;
	std::vector<std::string> paragraphs;
	std::ifstream token(fileName, std::fstream::in);

	int size = -1;

	while (std::getline(token, goodline)) {

		std::stringstream newStream(goodline);
		std::string output;

		while (newStream >> output) {

			size++;

			paragraphs.push_back(output);

			if (size == wrap) {
				cout << endl;
				size = 0;
			}


			for (int i = 0; i < paragraphs.size(); i++) {
				


	

				cout << paragraphs.at(i) << " ";



			

				if (paragraphs[i].back() == '.' || paragraphs[i].back() == '!' || paragraphs[i].back() == '?') {
					periodCounter++;

				}


				if (periodCounter == 5) {

					cout << std::endl << std::endl << std::endl;
					periodCounter = 0;


				} 


				paragraphs.clear();
			}

		}



	}
}

int main(int argc,  char** argv) {


	int wrapper = std::atoi(argv[2]);
	
	textPrinter(argv[1], wrapper);

}
