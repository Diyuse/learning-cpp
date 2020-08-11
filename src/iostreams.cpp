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
#include "../inc/TestHeader.h"

using namespace std;

int main(int argc, char** argv){

    ofstream writeToFile;
    ifstream readFromFile;
    string txtToWrite = "";
    string txtFromFile = "";

    // Looks for or creates the "text.txt" file.
    // ios_base::app, appends to the end of the file.
    // ios_base::trunc, if file already exists, deletes content and overwrite.
    // ios_base::in, open as read mode.
    // ios_base::ate, At The End, moves cursor to EOF.
    // ios_base::out, open as write mode.
    writeToFile.open("text.txt", ios_base::out | ios_base::trunc);
    if(writeToFile.is_open()){
        writeToFile << "Beginning of File\n";
        cout << "Enter data to write: ";
        getline(cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close(); // Close file when done.
    }

    readFromFile.open("text.txt", ios_base::in);
    if(readFromFile.is_open()){
        while(readFromFile.good()){
            getline(readFromFile, txtFromFile);
            cout << txtFromFile << endl;
        }
        readFromFile.close();
    }

    WaitForInput();

    return 0;
}