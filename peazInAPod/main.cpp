/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 8:48 AM
 */

#include <iostream>
using namespace std;

int main ()
{
    int numPods, numPeas, totPeas;
    
    cout << "Press return after entering a number" << endl;
    cout << "Enter the number of pods: " << endl;
    
    cin >> numPods;
    
    cout << "Enter the number of peas in a pod: ";
    cin >> numPeas;
    
    totPeas = numPods * numPeas;
    
    cout << "If you have ";
    cout << numPods;
    cout << " pea pods " << endl;
    cout << "and ";
    cout << numPeas;
    cout << " peas in each pod," << endl;
   
    cout << "You have ";
    cout << totPeas;
    cout << " peas in all the pods." << endl;
    
    return 0;
    
}