/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 10:41 AM
 */

#include <iostream>

using namespace std;


int main() {
    int qrtrs, nickls, dimes, pennies, totCoin;
   
    
    cout << "Hello," << endl;
    cout << "Please enter the amount of each type " << endl;
    cout << "of coins you have below: " << endl;
    cout << "Quarters: ";
    
        cin >> qrtrs;
    
    cout << "Dimes: ";
        cin >> dimes;
        
    cout << "Nickels: "; 
        cin >> nickls;
        
    cout << "Pennies: ";
        cin >> pennies;
        
totCoin = (qrtrs * 25) + (dimes * 10) + (nickls * 5) + pennies;

    cout << "Your coins are worth a total of ";
    cout << totCoin << " cents." << endl;
    
    cout << "Thank you." << endl;
    cout << "Bonvoyage~~" << endl;
    
    return 0;
}

