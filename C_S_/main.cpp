/* 
 * File:   main.cpp
 * Author: Imtiaz Hossain
 *
 * Created on February 23, 2016, 9:44 AM
 */

#include <iostream> 


using namespace std;


int main() {
    string cs;
    cout << "Hello," << endl;
    cout << "Did you know that Computer Science is " << endl;
    cout << "becoming increasingly hip these days?" << endl;
    cout << "For instance... check this out:" << endl;
    cout << "I've devised a program that will display " << endl;
    cout << "a secret message if you type in the passcode" << endl;
    cout << "cs1337" << endl;
    cout << "Go ahead and give it a whirl..." << endl;
    cout << "ENTER SECRET PASSCODE: " << endl;
    cin >> cs;
    
    if (cs == "cs1337") {
        cout << "*************************************************" << endl;
        cout << "        C C C                    S S S S      !! " << endl;
        cout << "      C       C                S         S    !! " << endl;
        cout << "     C                        S               !! " << endl;
        cout << "    C                          S              !! " << endl;
        cout << "    C                           S S S S       !! " << endl;
        cout << "     C                                   S    !! " << endl;
        cout << "      C      C                  S         S   !! " << endl;
        cout << "       C C C                      S S S S     @@ " << endl;
        cout << "*************************************************" << endl;
        cout << "        Computer Science is for the 1337         " << endl;
    }
    else {
        cout << "Try a little harder! That isn't the right password!" << endl;
    }

    
  
    return 0;
}

