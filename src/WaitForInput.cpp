#include <cstdlib> // Import c standard library
#include <iostream> // Import read and write data

using namespace std;

void WaitForInput(){
    string exit;
    while (exit != "x"){
        cout << "Input x to exit." << endl;
        cin >> exit;
    }
}

