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
#include "../inc/Shape.h"
#include "../inc/Circle.h"

using namespace std;

void ShowArea(Shape& shape); // not sure what this means as a parameter. As an argument it returns the address
// of the variable. As a parameter is it also expecting an address?
void ShowArea2(Shape shape);
void ShowArea3(Shape* shape);

int main(int argc, char** argv){

    Shape square(10, 5); // This seems to be the way to create an object with the given constructor.
    // square = Shape(height, width)? Is square now a pointer to this information?
    Circle circle(10); // Similarly, this would be circle = Circle(width)?
    ShowArea(square);
    ShowArea(circle);

    // This way of creating an object is very strange. new Class() returns a pointer to the object
    Shape* rectangle = new Shape(5, 10);
    Circle* circle1 = new Circle(10);
    ShowArea2(*rectangle); // The dereferencer also behaves in a strange way. For some reason it only uses the area
    // defined in Shape.
    ShowArea2(*circle1);

    // Trying again using setters.
    Shape rectangle2;
    rectangle2.SetHeight(5);
    rectangle2.SetWidth(10);
    Circle circle2;
    circle2.SetWidth(10);

    ShowArea2(rectangle2);
    ShowArea2(circle2); // This still breaks the polymorphism.

    // This way works.
    Shape rectangle3(3, 2); // object created this way is not a pointer.
    Circle circle3(4);

    cout << "Function with param& and arg." << endl;
    ShowArea(rectangle3);
    ShowArea(circle3);

    cout << "Function with param and arg." << endl;
    ShowArea2(rectangle3);
    ShowArea2(circle3);

    cout << "Function with param* and &arg." << endl;
    ShowArea3(&rectangle3);
    ShowArea3(&circle3);

    cout << rectangle3.GetHeight() << endl;
//    cout << Shape.GetNumOfShapes() << endl;
//    cout << Shape->GetNumOfShapes() << endl; // not how we access static variables.
    // From this, i'll conclude that param&-arg is the same as param*-&arg and the way a object should be instantiated is
    // Class name(params); and unlike name = new Class(params) (where name is a Class*), name is not treated like a pointer.

    WaitForInput();

    return 0;
}

void ShowArea(Shape& shape){
    cout << "Area: " << shape.Area() << endl;
}

void ShowArea2(Shape shape){
    cout << "Area: " << shape.Area() << endl;
}

void ShowArea3(Shape* shape){
    cout << "Area: " << shape->Area() << endl;
}