// Class and file completed in 6:04.34


#pragma once
#ifndef STREAMS_HPP
#define STREAMS_HPP

#include <iostream>
#include <string>
#include <fstream>



class FileIO {

public:

	void write(std::string text) {

		std::ofstream out;
		out.open("streams.txt", std::ios::out);

		out << text;





	}

	void read() {
		std::ifstream in("streams.txt");
		std::string input;

		if (in.is_open()) {
			while (in >> input) {
				std::cout << input << " ";

			}
		}

	}

};



#endif // !STREAMS_HPP

