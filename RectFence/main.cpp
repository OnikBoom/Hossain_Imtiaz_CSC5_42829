/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 8:50 AM
 */

#include <iostream>

using namespace std;


int main ()
{
    int totLgth, width, height;
    
    cout << "Hello" << endl;
    cout << "Press return upon entering the dimensions of" << endl;
    cout << "a rectangular area for which you'd like to"  << endl;
    cout << "know the length of fence required to enclose it." << endl;
    cout << "Enter the width: " << endl;
    
    cin >> width;
    
    cout << "Enter the height: " <<endl;
    cin >> height;
    
    totLgth = (2 * width) + (2 * height);
    
    cout << "If the width of the rectangle is ";
    cout << width;
    cout << " feet long " << endl;
    cout << "and" << endl;
    cout << "the height of the rectangle is ";
    cout << height;
    cout << " feet tall," << endl;
   
    cout << "You need ";
    cout << totLgth;
    cout << " feet of fence to enclose it." << endl;
    
    cout << "Goodbye" << endl;
    return 0;
    
}
