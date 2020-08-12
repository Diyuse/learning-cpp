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

// Template functions.
template <typename T>
void Times2(T val){
    cout << val << " * 2 = " << val * 2 << endl;
}

template <typename T>
T Add(T val1, T val2){
    return val1 + val2;
}

template <typename T>
T Max(T val1, T val2){
    return (val1 < val2) ? val2 : val1;
}

// Template Classes.
template <typename T, typename U>
class Person{
    public:
        T height;
        U weight;
        static int numOfPeople;
        Person(T h, U w){
            height = h, weight = w;
            numOfPeople++;
        }
        void GetData(){
            cout << "Height: " << height << " and weight: " << weight << endl;
        }
    };

// Need to initialize static class members, otherwise undefined reference.
template <typename T, typename U> int Person<T, U>::numOfPeople;

int main(int argc, char** argv){
    cout << "Testing template functions." << endl;
    Times2(5);
    Times2(5.3);

    cout << "5 + 4 = " << Add(5, 4) << endl;
    cout << "5.5 + 4.5 = " << Add(5.5, 4.5) << endl;
    cout << "Max 4 or 8 = " << Max(4, 8) << endl;
    cout << "Max A or B = " << Max('A', 'B') << endl;
    cout << "Max Dog or Cat = " << Max("Dog", "Cat") << endl;

    cout << endl << "Testing template classes." << endl;
    Person<double, int> mikeTyson(5.83, 216);
    mikeTyson.GetData();
    cout << "Number of People: " << mikeTyson.numOfPeople << endl;

    WaitForInput();

    return 0;
}