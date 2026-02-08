#include <stdio.h>
#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
    // declare variables: 
    string main_text = "NeverKnowsBest";
    int spacing = 20;
    int centering = 20;
    double time = 0.0;
    double speed = 0.2;
    //main for loop
    for (int i = 0; i < 650; i++) {
        double offset = spacing + centering * sin(time);

        // nested for loop 
        for (int s = 0; s < offset; s++) {
            cout << " ";
        }
        this_thread::sleep_for(chrono::milliseconds(40));
        cout << main_text << endl;
        time += speed;
    }
    return 0;
}