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
#include <list>
#include <forward_list>
#include "../inc/TestHeader.h"

using namespace std;

int main(int argc, char** argv){
    cout << "Using deque." << endl;
    // Double ended queue, can be expanded and contracted on both ends.
    deque<int> nums = {1,2,3,4};
    nums.push_front(0);
    nums.push_back(5);
    for(int x: nums){
        cout << x << endl;
    }

    cout << endl << "Using iterators." << endl;
    // Iterators are used to point at container memory locations.
    vector<int> nums2 = {1,2,3,4};
    vector<int>::iterator itr;
    cout << "Looping using iterators." << endl;
    for(itr = nums2.begin(); itr < nums2.end(); itr++){
        cout << *itr << endl;
    }

    cout << "Using advance, next and prev." << endl;
    vector<int>::iterator itr2 = nums2.begin();
    advance(itr2, 2); // moves the pointer by 2 spaces.
    cout << *itr2 << endl;
    auto itr3 = next(itr2, 1); // next is the same as advance but returns the result.
    cout << *itr3 << endl;
    auto itr4 = prev(itr2, 1);
    cout << *itr4 << endl;

    cout << "Using inserter to copy at specific location." << endl;
    vector<int> nums3 = {1, 4, 5, 6};
    vector<int> nums4 = {2, 3};
    auto itr5 = nums3.begin();
    advance(itr5, 1);
    // copy value from num4 to where we iterated to in nums3.
    copy(nums4.begin(), nums4.end(), inserter(nums3, itr5));
    for(int &i: nums3){
        cout << i << endl;
    }

    cout << endl;
    // More on containers.
    cout << "Deque assign" << endl;
    cout << "Nums before assign" << endl;
    cout << "Size: " << nums.size() << endl;
    for(int i: nums){
        cout << i << " ";
    }
    cout << endl;

    nums.assign({11, 12}); // assign overwrites the deque.
    cout << "Nums after assign" << endl;
    cout << "Size: " << nums.size() << endl;
    for(int i: nums){
        cout << i << " ";
    }
    cout << endl;

    WaitForInput();

    return 0;
}