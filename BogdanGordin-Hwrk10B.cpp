 /*

Bogdan Gordin
04/12/17
Homework10A: Word Counter

Below are notes:

    *Write a function that accepts a pointer to a C-string as an
     argument and returns the number of words contained in the string.

    *Demonstrate the function in a program that asks the user to input
     a string and then passes it to the function.

    *The number of words in the string should be displayed on the screen.


*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    string usersString;
    int counter = 0;

    cout << endl << "\t" << "Hello! Welcome to Bogdan's Gordin word counter." << endl << endl;
    cout << "Please punch in your string: ";
    cin >> usersString;
    cout << endl << "\t\t\t\tOk!" << endl << endl;

    while(isprint(usersString[counter]))
    {
        counter++;

    }
    cout << counter << endl << endl;

    cout << "Yeah this is an unfinished homework, oops.";





    cout <<"\n\n\n...";
    return 0;
}

