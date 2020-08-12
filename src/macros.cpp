#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include <string> // Import working with strings
#include <limits> // Import to get min and max values of datatypes
#include <vector> // Import vectors
#include <sstream> // Import string streams
#include <numeric> // Import working with sequences of values
#include <ctime> // Import working with time
#include <cmath> // Import math functions
#include <fstream> // Import for files
#include <algorithm> // Need to include this for sort
#include "../inc/TestHeader.h"

using namespace std;

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

int main(int argc, char** argv){
    cout << "Circle Area " << AREA_CIRCLE(5) << endl;

    WaitForInput();

    return 0;
}