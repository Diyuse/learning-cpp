#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include <string> // Import working with strings
#include <limits> // Import to get min and max values of datatypes
#include <vector> // Import vectors
#include <sstream> // Import string streams
#include <numeric> // Import working with sequences of values
#include <ctime> // Import working with time
#include <cmath> // Import math functions

using namespace std;

int imGlobal = 0; // global variable available to the entire file
const double PI = 3.141; // constant, not changing

int main(int argc, char** argv) {
    // like in C
    // argc is number of arguments
    // argv is an array of pointers to strings
    // and the main function returns an integer when done

	cout << "Hello World!" << endl; // << is the stream insertion operator
	// cout is the stream, endl issues a new line and writes to the console

	// Written like this if there was to std namespace
//	std::cout << "Hello World!" << endl;

	return 0;
}