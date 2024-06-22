// Maya Thompson
// CS 1, Section #0107
// Assignment #1, Problem #2
// Summary: This program outputs the result of three simple calculations

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{

// Calculate each expression and display the result vertically, decimals right aligned, and rounded two decimal places to the screen

// Expression 1

    cout << "Enter value for num1: 3 \n";
    cout << "Enter value for num2: 5 \n \n";

    cout << setw(5) << setprecision(1) << fixed << "3.0" << endl
         << setw(5) << setprecision(1) << fixed << "* 5.0" << endl
         << "----- \n"
         << setw(5) << setprecision(2) << fixed << 3.0 * 5.0 << endl << endl << endl;

// Expression 2

    cout << "Enter value for num1: 7.1 \n";
    cout << "Enter value for num2: 8.3 \n";
    cout << "Enter value for num3: 2.2 \n \n";

    cout << setw(5) << setprecision(1) << fixed << "7.1" << endl
         << setw(5) << setprecision(1) << fixed << "* 8.3" << endl
         << setw(5) << setprecision(1) << fixed << "- 2.2" << endl
         << "----- \n"
         << setw(5) << setprecision(2) << fixed << 7.1 * 8.3 - 2.2 << endl << endl << endl;

// Expression 3

    cout << "Enter value for num1: 3.2 \n";
    cout << "Enter value for num2: 6.1 \n";
    cout << "Enter value for num3: 5 \n \n";

    cout << setw(12) << setprecision(1) << fixed << "3.2 " << endl
         << setw(12) << setprecision(1) << fixed << "/(6.1 * 5.0)" << endl
         << "------------ \n"
         << setw(12) << setprecision(2) << fixed << 3.2 / (6.1*5.0) << endl;
    



    return 0;

}