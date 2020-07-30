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

    string str1 = "I'm a string";
    cout << "First: " << str1[0] << endl;
    cout << "Last: " << str1.back() << endl;
    cout << "Length: " << str1.length() << endl;
    string str2 = str1;
    string str3(str2, 4);
    string str4 = str1 + " and your not";
    str4.append("!");
    str4.erase(12,str4.length() - 1);
    cout << "New String: " << str4 << endl;
    if(str4.find("string") != string::npos) cout << "String Index: " << str4.find("string") << endl;
    // string::npos same as end of string.

    cout << "Substring: " << str4.substr(6, 6) << endl;
    string strNum = to_string(1+2);
    cout << "I'm a String: " << strNum << endl;

    // Char functions. Returns 0 if false and non-0 if true.
    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number, " << isalnum(letterZ) << endl;
    cout << "Is z a letter, " << isalpha(letterZ) << endl;
    cout << "Is 5 a number, " << isdigit(num5) << endl;
    cout << "Is space a space, " << isspace(aSpace) << endl;

    WaitForInput();

    return 0;
}