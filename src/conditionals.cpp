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

int main(int argc, char** argv) {
    // Conditional Operators: > < >= <= == !=
    // Logical Operators: && || !

    string sAge;
    cout << "Enter your Age: ";
    cin >> sAge;
    int nAge = stoi(sAge);

    if ((nAge >= 1) && (nAge <= 18)){
        cout << "Important Birthday" << endl;
    } else if ((nAge == 21) || (nAge == 50)){
        cout << "Important Birthday" << endl;
    } else if (nAge >= 65){
        cout << "Important Birthday" << endl;
    } else {
        cout << "Not an Important Birthday" << endl;
    }

    //Ternary operator
    int age18 = 18;
    bool canIVote = (age18 >= 18) ? true : false;
    cout.setf(ios::boolalpha); // To print true or false instead of 1 or 0
    cout << "John Vote: " << canIVote << endl;

    WaitForInput();

    return 0;
}