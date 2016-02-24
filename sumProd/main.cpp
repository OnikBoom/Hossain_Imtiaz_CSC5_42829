/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 9:25 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int A, B, sum, prod;
    cout << "Hello." << endl;
    cout << "Please input values for A and B to " << endl;
    cout << "calculate their sum and product:" << endl;
    cout << " A =  ";
    cin >> A;
    cout << " B =  ";
    cin >> B;
    
    sum = A + B;
    prod = A * B;
            
    cout << "The sum of A and B is: ";
    cout << sum << endl;
    cout << "The product of A and B is: ";
    cout << prod << endl;
    
    cout << "Thank You." << endl;
    cout << "Goodbye." << endl;
   
    
    return 0;
}

