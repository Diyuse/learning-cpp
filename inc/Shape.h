#pragma once

class Shape {
    // Protected is accessible from this class and those that inherit for it.
protected:
    double height;
    double width;

    // Public is accessible from anything that has access to the object.
public:
    static int numOfShapes;
    Shape(double length);
    Shape(double height, double width);
    Shape();

    virtual ~Shape(); // Deconstructor. Called automatically anytime an object is deleted.
    void SetHeight(double height);
    double GetHeight();
    void SetWidth(double height);
    double GetWidth();
    static int GetNumOfShapes();
    virtual double Area(); // Virtual because we plan on overriding it.

    // Private is only accessible from within the class.
//private:
};