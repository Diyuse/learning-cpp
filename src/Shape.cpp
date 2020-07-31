#include "../inc/Shape.h"

Shape::Shape() {
    this->height = 0;
    this->width = 0;
}

Shape::Shape(double length){
    this->height = length; // -> is pointer operator and is used to access fields or methods.
    this->width = length;
}

Shape::Shape(double height, double width){
    this->height = height;
    this->width = width;
}

Shape::~Shape() = default; // Default decontructor.

void Shape::SetHeight(double height){
    this->height = height;
}

double Shape::GetHeight() {return height;}

void Shape::SetWidth(double width){
    this->width = width;
}

double Shape::GetWidth() {return width;}

int Shape::GetNumOfShapes() {return numOfShapes;}

double Shape::Area(){
    return height * width;
}

int Shape::numOfShapes = 0; // Default value for number of shapes.