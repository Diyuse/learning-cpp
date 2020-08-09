#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include <string> // Import working with strings
#include <limits> // Import to get min and max values of datatypes
#include <vector> // Import vectors
#include <sstream> // Import string streams
#include <numeric> // Import working with sequences of values
#include <ctime> // Import working with time
#include <cmath> // Import math functions
#include <algorithm> // Need to include this for sort
#include "../inc/TestHeader.h"

using namespace std;

vector<int> GenerateRandVect(int numOfNums, int min, int max);

int main(int argc, char** argv){

    vector<int> vecVals = GenerateRandVect(10, 1, 50);
    cout << "Random vector." << endl;
    cout << "[ ";
    for (auto val: vecVals){
        cout << val << " ";
    }
    cout << "]" << endl;

    // Sort vector using lambda expression.
    vector<int> sortVecVals = vecVals;
    // lambdas are basically the same as passing in functions in functional programming.
    sort(sortVecVals.begin(), sortVecVals.end(), [](int x, int y){return (x < y);});
    cout << "Sorted vector." << endl;
    cout << "[ ";
    for (auto val: sortVecVals){
        cout << val << " ";
    }
    cout << "]" << endl;

    // Get even values.
    vector<int> evenVecVals;
    copy_if(vecVals.begin(), vecVals.end(), back_inserter(evenVecVals), [](int x){return ((x % 2) == 0);});
    cout << "Even values." << endl;
    cout << "[ ";
    for (auto val: evenVecVals){
        cout << val << " ";
    }
    cout << "]" << endl;

    // Get sum of all values.
    vector<int> sumVecVals;
    int sum = 0;
    // [&] capture external variables for use in the lambda expression.
    for_each(vecVals.begin(), vecVals.end(), [&](int x) {sum += x;});
    cout << "Sum values." << endl;
    cout << sum << endl;

    WaitForInput();

    return 0;
}

vector<int> GenerateRandVect(int numOfNums, int min, int max){
    vector<int> vecValues;
    srand(time(NULL));
    int i=0, randVal=0;
    while(i < numOfNums){
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}