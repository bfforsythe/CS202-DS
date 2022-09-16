#include <iostream>
#include <string>
#include <vector>
#include "myreadwrite.hpp"
#include <fstream>

using std::cin;
using std::cout;
using std::endl;


// HW05 - A1 Templates
/*
int main() {


	std::ofstream ofile("numbers.dat");
	double d = 13.3;
	myWrite(ofile, d);
	int x = 5;
	myWrite(ofile, x);

	std::ifstream ifile("numbers.dat");
	double readd = 0.0;
	int readx = 0;

	myRead(ifile, readd);
	myRead(ifile, readx);

} */




// HW05 P2 - Template Rational Class

// I can't for the life of me find the "Rational"
// class anywhere inside of the CS202 class. I may have written it
// somwhere but I... don't know.

// Either way, to accomplish this task I'd definitely take the same approach
// i took inside of the myreadwrite.hpp. The user would input a numerator and denom.
// and it would either divide or output a rational number from the divisors.

// This would also assure zero was not a denominator and return an error if it was.



// HW05 P3 - Recursion

// Fo = 0
// F1 = 1
// Fn = F(n-1) + F(n-2)

int fib(int n) {

	if (n > 1) {
		return(fib(n - 1) + fib(n- 2));
	}
	else {
		return n;
	}


}

int fib_loop(int n) {


	int t1 = 0;
	int t2 = 1;
	int placeholder = 0;
	for (int i = 1; i < n; i++) {
		placeholder = t1 + t2;
		t1 = t2;
		t2 = placeholder;

	}

	if (n == 0) {
		return n;
	}
	return(placeholder);
}

int ack(int m, int n)
{
	if (m == 0) {
		return n + 1;
	}
	else if ((m > 0) && (n == 0)) {
		return ack(m - 1, 1);
	}
	else if ((m > 0) && (n > 0)) {
		return ack(m - 1, ack(m, n - 1));
	}
}

int main() {
	int input;
	cout << "Enter term to be calculated up to: ";

	cin >> input;

	int total = fib(input);
	cout << "Recursion answer = " << total << endl << endl;
	int totalLoop = fib_loop(input);
	cout << "Loop answer = " << totalLoop << endl << endl;
	int ackLoop = ack(input,input);
	cout << "Ackerman's Number = " << ackLoop;

	
}