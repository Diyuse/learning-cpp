#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include <string> // Import working with strings
#include <limits> // Import to get min and max values of datatypes
#include <vector> // Import vectors
#include <sstream> // Import string streams
#include <numeric> // Import working with sequences of values
#include <ctime> // Import working with time
#include <cmath> // Import math functions
#include "../inc/TestHeader.h"

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

	// Written like this if we were not using std namespace
//	std::cout << "Hello World!" << endl;

    bool married = false;
    char myGrade = 'A';

    // Showing min and max of integers, can do the same for floating point
    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Min short int " << numeric_limits<short int>::min() << endl;
    cout << "Max short int " << numeric_limits<short int>::max() << endl;
    cout << "Min int " << numeric_limits<int>::min() << endl;
    cout << "Max int " << numeric_limits<int>::max() << endl;
    cout << "Min long " << numeric_limits<long>::min() << endl;
    cout << "Max long " << numeric_limits<long>::max() << endl;

    float f1 = 1.1111111; // floats are only accurate to 6 digits
    float f2 = 1.1111111;

    printf("Sum = %.16f\n", (f1 + f2)); // format a print

    auto whatAmi = true; // automatically assign type, here it will be set to bool

    cout << "int Byte : " << sizeof(int) << endl; // sizeof returns how many bytes are used

    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi"); // %5d puts 5 spaces to the left of the int

    WaitForInput();

	return 0;
}