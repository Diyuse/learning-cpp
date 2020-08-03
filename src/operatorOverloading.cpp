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

class Box{
public:
    double length, width, breadth;
    string boxString;
    Box(){
        length = 1, width = 1, breadth = 1;
    }
    Box(double l, double w, double b){
        length = l, width = w, breadth = b;
    }

    // Operation overloading, dictates what happens when the operator is used.
    // Here Box& because updating data in an already made Box.
    Box& operator ++(){
        length++;
        width++;
        breadth++;
        return *this;
    }
    operator const char*(){
        ostringstream boxStream; // Stream to be loaded with characters.
        boxStream << "Box: " << length << ", " << width << ", " << breadth;
        boxString = boxStream.str(); // Turns stream into a string.
        return boxString.c_str(); // Turns string into an array with \0 at the end.
    }

    // Here new Box is being returned so no Box&.
    Box operator + (const Box& box2){
        Box boxSum;
        boxSum.length = length + box2.length;
        boxSum.width = width + box2.width;
        boxSum.breadth = breadth + box2.breadth;
        return boxSum;
    }

    bool operator == (const Box& box2){
        return ((length == box2.length) && (width == box2.width) && (breadth == box2.breadth));
    }
};

int main(int argc, char** argv){
    Box box(10, 10, 10);
    ++box;
    cout << box << "." << endl;
    Box box2(5,5,5);
    cout << "Box1 + Box2 = " << box + box2 << "." << endl;
    cout << "Box1 == Box2 = " << (box == box2) << "." << endl;

    WaitForInput();

    return 0;
}