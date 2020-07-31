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

class Shape{
public:
    virtual double Area() = 0;
};

class Circle : public Shape{
protected:
    double width;
public:
    Circle(double w){
        width = w;
    }
    double Area() override{
        return 3.14159 * pow((width/2), 2);
    }
};

void ShowArea(Shape& shape); // This needs to be after the Shape class definition.

int main(int argc, char** argv){
//    Shape square(10,10); // Won't compile because Shape is an abstract class and has no constructor.
    Circle circle(10);
    ShowArea(circle);

    WaitForInput();

    return 0;
}

void ShowArea(Shape& shape){
    cout << "Area: " << shape.Area() << endl;
}