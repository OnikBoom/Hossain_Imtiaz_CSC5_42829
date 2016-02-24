/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 1:07 PM
 */

#include <iostream>

using namespace std;


int main() {
    char x; 
    cout << "Hello there!" << endl;
    cout << "In this program, we will create an image of " << endl;
    cout << "the letter C composed of letters of any value" << endl;
    
    cout << "Enter the letter you'd like to create C with: ";
    
    cin >> x;
    
    cout <<" "<< x << " " << x << " " << x << endl;
    cout << x << "    " << x << endl;
    cout << x << endl;
    cout << x << "    " << x << endl;
    cout <<" " << x << " " << x << " " << x << endl;
    
    return 0;
}

