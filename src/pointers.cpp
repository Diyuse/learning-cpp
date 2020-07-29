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

int main(int argc, char** argv) {
    // Array
    int arrnNums[10] = {1}; // size of array cannot change
    int arrnNums2[] = {1,2,3,4};
    int arrnNums3[5] = {8,9};
    cout << "1st Value: " << arrnNums3[0] << endl;
    arrnNums3[0] = 7;
    cout << "1st Value: " << arrnNums3[0] << endl;
    int arrnNums4[2][2][2] = {{{1,2}, {3,4}}, {{5,6}, {7,8}}};
    cout << arrnNums4[0][1][1] << endl;

    // Vector, when we don't know the size of our array
    vector<int> vNums(2);
    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(3); // puts 3 at the back of the vector
    cout << "Vector Size: " << vNums.size() << endl;
    for (int i=0; i<vNums.size(); i++){
        printf("Vector[%d]: %d\n", i, vNums[i]);
    }

    WaitForInput();

    return 0;
}