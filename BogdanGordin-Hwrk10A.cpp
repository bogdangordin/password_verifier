 /*

Bogdan Gordin
04/12/17
Homework10A: Password Verefier

Below are notes:

    *The password should be at least six characters long.

    *The password should contain at least one uppercase and at least one lowercase letter.

    *The password should have at least one digit.

    *If it doesn’t, the program should display a message telling the user why.


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
    bool hasAtLeastSixChars = false;
    bool hasAtLeastOneLowCase = false;
    bool hasAtLeastOneHighCase = false;
    bool hasAtLeastOneDigit = false;
    //bool hasNoWeirdChars = true;
    int passwordSize = 0;
    int counter = 0;
    char passwordInput[100];
    int missingChars = 0;


cout << endl << "\t" << "Hello! Welcome to Bogdan's Gordin password verefyeir." << endl << endl;

cout << "Please punch in your password: ";
cin >> passwordInput;
cout << endl << "    Ok, will this meet the criterias?" << endl << endl << endl;

while (isalnum(passwordInput[counter]))
{
    counter++;
    passwordSize++;
}
counter = 0;

/*
while (counter <= passwordSize)
{
    if(passwordInput[counter] == '!')
    {
        hasNoWeirdChars = false;
    }
    counter++;
}
counter = 0;
*/

missingChars = 6 - passwordSize;

if (passwordSize >= 6)
{
    hasAtLeastSixChars = true;
}

while (counter <= passwordSize)
{
    if(islower(passwordInput[counter]))
    {
        hasAtLeastOneLowCase = true;
    }
    counter++;
}
counter = 0;

while (counter <= passwordSize)
{
    if(isupper(passwordInput[counter]))
    {
        hasAtLeastOneHighCase = true;
    }
    counter++;
}
counter = 0;

while (counter <= passwordSize)
{
    if(isdigit(passwordInput[counter]))
    {
        hasAtLeastOneDigit = true;
    }
    counter++;
}
counter = 0;

if (hasAtLeastSixChars == false)
{
    cout << "USER ERROR! You'r password is " << missingChars << " chars short." << endl;
}

if (hasAtLeastOneLowCase == false)
{
    cout << "USER ERROR! You'r password has no lower case chars." << endl;
}

if (hasAtLeastOneHighCase == false)
{
    cout << "USER ERROR! You'r password has no upper case chars." << endl;
}

if (hasAtLeastOneDigit == false)
{
    cout << "USER ERROR! You'r password has no digits in it." << endl;
}

/*
if (hasNoWeirdChars = false)
{
    cout << "USER ERROR! You'r password has a weird char in it. What is this? Runescape?" << endl;
}
*/

if(hasAtLeastSixChars == true && hasAtLeastOneLowCase == true && hasAtLeastOneHighCase == true && hasAtLeastOneDigit == true)
{
    cout << "Mazal tov! The password is accepted.";
}






    cout <<"\n\n\n...";
    return 0;
}

