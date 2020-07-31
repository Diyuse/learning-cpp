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

// Function prototypes.
double AddNumbers(double num1, double num2);

void AssignAge(int age);
int AssignAge2(int age);
void AssignAge3(int* pAge);

void PrintArray(int* arr, int size);
void DoubleArray(int* arr, int size);

int main(int argc, char** argv){

    printf("%.1f + %.1f = %.f\n", 5.0, 4.0, AddNumbers(5, 4));

    int age43 = 43;
    AssignAge(age43); // Doesn't actually change the value of age43. Passed by value.
    cout << age43 << endl;

    age43 = AssignAge2(age43); // Poor way of changing a value. Instead use pointers.
    cout << age43 << endl;

    AssignAge3(&age43); // & reference operator, gives address of the variable.
    cout << age43 << endl;

    int intArray[] = {1,2,3,4};
    PrintArray(intArray, 4);
    DoubleArray(intArray, 4);
    PrintArray(intArray, 4);

    WaitForInput();

    return 0;
}

double AddNumbers(double num1 = 0, double num2 = 0){
    return num1 + num2;
}

void AssignAge(int age){
    age = 24;
}

int AssignAge2(int age){
    age = 24;
    return age;
}

void AssignAge3(int* pAge){
    *pAge = 25; // * here is dereference operator, * param is a pointer.
}

void PrintArray(int* arr, int size){
    cout << "[" << arr[0];
    for(int i=1; i<size; i++){
        cout << ", " << arr[i];
    }
    cout << "]" << endl;
}

void DoubleArray(int* arr, int size){
    for(int i=0; i<size; ++i){
        arr[i] = arr[i] * 2;
    }
}