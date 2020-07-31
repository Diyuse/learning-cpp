#include "../inc/Circle.h"
#include "../inc/Shape.h"
#include <cmath>

Circle::Circle(double width) : Shape(width) {
    // Handled in constructor inside of Shape.
}

Circle::Circle() : Shape() {}

Circle::~Circle() = default;

double Circle::Area(){
    return 3.14159 * pow((width/2), 2);
}