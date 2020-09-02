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
#include <thread>
#include <chrono>
#include <mutex>
#include "../inc/TestHeader.h"


using namespace std;

int GetRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

void ExecuteThread(int id){
    auto nowTime = chrono::system_clock::now(); // Time point representing the current time when called.
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime); // Converts time point so we can output it.
    tm myLocalTime = *localtime(&sleepTime); // Convert it to current time zone.
    cout << "Thread " << id << "Sleep Time: " << ctime(&sleepTime) << endl;
    cout << "Month: " << myLocalTime.tm_mon << endl; // Get month.
    cout << "Day: " << myLocalTime.tm_mday << endl; // Get day.
    cout << "Year: " << myLocalTime.tm_year + 1900 << endl; // Get year since 1900.
    cout << "Hours: " << myLocalTime.tm_hour << endl;
    cout << "Minutes: " << myLocalTime.tm_min << endl;
    cout << "Seconds: " << myLocalTime.tm_sec << endl;
    this_thread::sleep_for(chrono::seconds(GetRandom(3))); // Puts current thread to sleep for some random value less than 3 seconds.
    nowTime = chrono::system_clock::now();
    sleepTime = chrono::system_clock::to_time_t(nowTime);
    cout << "Thread " << id << "Awake Time: " << ctime(&sleepTime) << endl;
}

int main(int argc, char** argv){

    thread th1(ExecuteThread, 1); // Pass function thread is going to execute on followed by the parameters.
    th1.join(); // Join the thread to the main thread. Main is also a thread and is going to wait for th1 is done.

    thread th2(ExecuteThread, 1);
    th2.join();

    WaitForInput();

    return 0;
}