#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include <string> // Import working with strings
#include <limits> // Import to get min and max values of datatypes
#include <vector> // Import vectors
#include <sstream> // Import string streams
#include <numeric> // Import working with sequences of values
#include <ctime> // Import working with time
#include <cmath> // Import math functions

using namespace std;

int main(int argc, char** argv) {
    string q1 = "Enter a Number: "; // string declaration with or without field
    string num1, num2;
    cout << q1; // print q1
    cin >> num1; // get an input and num1 points to the input
    cout << "Enter Another Number: "; // print the string directly
    cin >> num2;
    int nNum1 = stoi(num1); // stoi converts string to integer, simiarly stof converts string to float
    int nNum2 = stoi(num2);

    // Math operators
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

    return 0;
}