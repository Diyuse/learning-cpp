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
    int i = 1;
    while (i <= 20){
        if ((i % 2) == 0){
            // Skip even numbers.
            i += 1;
            continue;
        }
        // Example of using break.
        if (i == 15) break;
        cout << i << endl;
        i += 1;
    }

    vector<string> words;
    stringstream ss("Some Random Words");
    string word;
    // Adds every word separated by a space in the stream to a list.
    while(getline(ss, word, ' ')){
        words.push_back(word);
    }

    for(int i=0; i<words.size(); ++i){
        cout << words[i] << endl;
    }

    int arr3[] = {1,2,3};
    for(auto x: arr3) cout << x << endl; // Can use auto in for loop.

    // Do-while loop is at least guaranteed to run once.
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    do{
        cout << "Guess the Number: ";
        cin >> guess;
        if(guess > secretNum) cout << "Too Big\n";
        if(guess < secretNum) cout << "Too Small\n";
    } while(secretNum != guess);
    cout << "You Guessed it" << endl;

    WaitForInput();

    return 0;
}