// Container class finished in 04:58.29


#pragma once
#ifndef CONTAINERS_HPP
#define CONTAINERS_HPP

#include <iostream>
#include <vector>
#include <string>



class VectorSpeedrun {

public:

	std::vector<int> vectors;

	void storage(int storable) {
		cout << "Storing: " << storable;
		vectors.push_back(storable);
		cout << std::endl;
	}

	void search(int searcher) {

		cout << "Looking for: " << searcher;

		for (int i = 0; i < vectors.size(); i++) {
			if (vectors.at(i) == searcher) {
				cout << "GOT IT. IT'S AT POSITION " << i;
			}
			std::cout << endl;
		}

	}

	void retrieve() {
		cout << "Your new vector is: ";
		for (int i = 0; i < vectors.size(); i++) {
			cout << vectors.at(i) << " , ";
		}
		cout << std::endl << endl;
	}

};

#endif