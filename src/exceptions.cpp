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

int main(int argc, char** argv){
    double num3 = 10, num4 = 0;
    try{
        if(num4 == 0){
            throw "Division by Zero Error";
        } else {
            printf("%.1f / %.1f = %.1f", num3, num4, (num3/num4));
        }
    }
    catch(const char* exp){
        cout << "Error: " << exp << endl;
    }

    WaitForInput();

    return 0;
}