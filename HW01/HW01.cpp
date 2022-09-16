#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <algorithm>
#include <fstream>
#include <sstream>



// ------------------------------------------------------ HW01 Main Stopwatch Timer -----------------------------------------

 using namespace std::chrono;



class StopWatch {
	public:

		time_point<steady_clock> start, end;
		

		void Start() {
			start = high_resolution_clock::now();
	}

		void Stop() {
			 end = high_resolution_clock::now();

			duration<double> duration = end - start;
			double ms = duration.count() * 1000;
			double sec = duration.count();

			std::cout << "\n" << sec << " seconds";
			std::cout << "\n" << ms << " ms";
		}


};

/*
void VectorCreator(int size) {

	std::vector<int> searchable;

	for (int i = 0; i < size; i++) {
		searchable.push_back(i);
		std::cout << searchable.at(i) << "\n";

			if (binary_search(searchable.begin(), searchable.end(), 9999)) {

		std::cout << "Got It!";
	}

	}



}


int main() {
	StopWatch brandDeal;
	
	brandDeal.Start();
	
	VectorCreator(10005);

	brandDeal.Stop();
} 


*/




// -------------------------------------------------------- HW01A1 Audible Too -----------------------------------------------


int main() {

	StopWatch brandDeal;

	brandDeal.Start();

	std::ifstream in("pg64317.txt");

	std::string stringy;

	if (in) {
		std::ostringstream out;
		out << in.rdbuf();
		stringy = out.str();

		std::cout << stringy;
	}

	brandDeal.Stop();


} 
