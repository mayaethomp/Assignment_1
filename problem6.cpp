// Maya Thompson
// CS 1, Section #0107
// Assignment #1, Problem #6
// Summary: This program asks the user to enter a character and then displays the integer associated with the character from the ASCII code table

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

// Define variable x as a char 
char x = 'A';

// Ask user for a character to store as variable x

    cout << "Please enter a character: \n";
    cin >> x;

// Output the ASCII code for the user's inputted character to the screen

    cout << "The ASCII code for the character " << x << " is " << int(x) << endl;

    return 0;
}