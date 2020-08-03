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

// struct is used more for complex datatypes, while class is used to model real world objects.
struct Shape{
    // by default everything is public
    double length, width;
    Shape(double l = 1, double w = 1){
        length = l;
        width = w;
    }
    double Area(){
        return length * width;
    }
    // Things can be private.
private:
    int id;
};

struct Circle : Shape{
    Circle(double width){
        this->width = width;
    }
    double Area(){
        return 3.14159 * pow((width / 2), 2);
    }
};

int main(int argc, char** argv){

    Shape shape(10, 10);
    cout << "Square Area: " << shape.Area() << endl;
    Circle circle(10);
    cout << "Circle Area: " << circle.Area() << endl;
    Shape rectangle{10, 15}; // Aggregate
    cout << "Rectangle Area: " << rectangle.Area() << endl;

    WaitForInput();

    return 0;
}