
/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 11:06 AM
 */

#include <iostream>

using namespace std;


int main() {
    int dist, acc, time;
    
    cout << "Hello," << endl;
    cout << "This program allows you to calculate the approximate distance " << endl;
    cout << "an object would travel, in freefall, for a given amount of time." << endl;
    
    cout << "Please type in the desired freefall time in (seconds): " << endl;
        
        cin >> time;
    // rounded 9.8 m/(s^2) to 10 m/(s^2)
    acc = 10;
    dist = (acc ) * (time * time)/2;
        
    cout << "If an object were to free fall for " << time << " seconds,"<< endl;
    cout << "It would have traveled an approximate distance of: " << endl;
    cout << dist << " meters" << endl;
    
    cout << "Thank you." << endl;

    return 0;
}

