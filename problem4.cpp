// Maya Thompson
// CS 1, Section #0107
// Assignment #1, Problem #4
// Summary: This program collects a pyramid's height and base length in order to calculate and output the pyramid's volume

#include <iostream>
#include <iomanip>

using namespace std;


int main() 
{

// Define and initialize variables that store user input

    double height = 0;
    double length = 0;

// Ask the user to enter the length of a side of the square base 

    cout << "Enter the length of the pyramid's base: \n";
    cin >> length;

// Ask the user to enter the height of the pyramid

    cout << "Enter the height of the pyramid: \n";
    cin >> height;

// Calculate the area of the square base of the pyramid using the equation length * length

    double area = length * length;

// Calculate the volume of the pyramid using the equation Volume of Pyramid = A * h/3

    double volume = area * (height / 3);

// Display the results (rounded to two decimal places) to the screen, including the area of the base, the height, and the volume of the pyramid

    cout << "The area of the base is: " << setprecision(2) << fixed << area << endl;
    cout << "The height of the pyramid is: " << setprecision(2) << fixed << height << endl;
    cout << "The volume of the pyramid is: " << setprecision(2) << fixed << volume << endl;

    return 0;

}