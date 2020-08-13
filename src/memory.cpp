#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data
#include <string> // Import working with strings
#include <limits> // Import to get min and max values of datatypes
#include <vector> // Import vectors
#include <sstream> // Import string streams
#include <numeric> // Import working with sequences of values
#include <ctime> // Import working with time
#include <cmath> // Import math functions
#include <fstream> // Import for files
#include <algorithm> // Need to include this for sort
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>
#include "../inc/TestHeader.h"

using namespace std;

int main(int argc, char** argv){

    // Using malloc
    int amtToStore;
    cout << "How many numbers do you want to store: ";
    cin >> amtToStore;
    int* pNums;
    // malloc allocates a block of n bytes.
    // sizeof returns how many bytes.
    pNums = (int *) malloc(amtToStore * sizeof(int));
    if(pNums != NULL){
        int i = 0;
        while(i < amtToStore){
            cout << "Enter a Number: ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered these numbers." << endl;
    for(int i=0; i<amtToStore; i++){
        cout << pNums[i] << endl;
    }
    delete pNums; // Need to delete when done with.

    cout << "Retry using smart pointers." << endl;
    int amtToStore2;
    cout << "How many numbers do you want to store: ";
    cin >> amtToStore2;
    unique_ptr<int[]> pNums2(new int[amtToStore2]);
    if(pNums2 != NULL){
        int i = 0;
        while(i < amtToStore2) {
            cout << "Enter a Number: ";
            cin >> pNums2[i];
            i++;
        }
    }

    cout << "You entered these numbers." << endl;
    for(int i=0; i<amtToStore2; i++){
        cout << pNums2[i] << endl;
    }
    // smart pointer doesn't need to be deleted manually.

    WaitForInput();

    return 0;
}