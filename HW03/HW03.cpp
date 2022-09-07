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

/*
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

*/



// HW03 A2 - DOOM WADs

/*

class WadFile {
public: 
	void read(const char* path) {
		std::ifstream input;
		input.open(path, std::ios::in | std::ios::binary);

		
		input.seekg(0);

		char y = 1;
		input.read((char*)y, sizeof(WadFile) * 10);

		

	}

	void write(const char* path) {


	}

};


int main(int argc, char**argv) {

	WadFile wf;
	
	wf.read("DOOM1.WAD");


	return(0);
	

}

*/



// HW03 A3 - OpenGL

#include <windows.h>
#include <GLFW/glfw3.h>

void draw() {


}

int main(){

	GLFWwindow* window;

	if (!glfwInit()) { return(-1); }

	window = glfwCreateWindow(1920, 1080, "Hello World", NULL, NULL);

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {

		// clear the screen to something other than black
		glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		// draw a triangle that covers the screen
		glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(-1.0f, -1.0f, 0.0f);
		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.0f, 1.0f, 0.0f);
		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(1.0f, -1.0f, 0.0f);
		

		glDrawArrays(GL_TRIANGLES, 0, 3);
		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return 0;
}