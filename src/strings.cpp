#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include "../inc/TestHeader.h"

using namespace std;

int main(int argc, char** argv) {
    string q1 = "Enter a Number: "; // string declaration with or without field
    string num1, num2;
    cout << q1; // print q1
    cin >> num1; // get an input and num1 points to the input
    cout << "Enter Another Number: "; // print the string directly
    cin >> num2;

    // Assuming no errors from input.
    int nNum1 = stoi(num1); // stoi converts string to integer, simiarly stof converts string to float
    int nNum2 = stoi(num2);

    // Math operators
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

    WaitForInput();

    return 0;
}