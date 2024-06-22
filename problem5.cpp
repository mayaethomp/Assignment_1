// Maya Thompson
// CS 1, Section #0107
// Assignment #1, Problem #5
// Summary: This program creates an invoice for a fruit vendor named "Bob's Fruits." 

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

// Define and initialize variables to store number of iteams purchased

    int apples = 0;
    int oranges = 0;
    int bananas = 0;

// Welcome customers and display prices

    cout << "Welcome to Bob's Fruits! We sell apples, oranges, and bananas! \n \n";
    cout << "Here are our prices: \n";
    cout << "Apples cost $0.65 each \n";
    cout << "Oranges cost $0.90 each \n";
    cout << "Bananas cost $0.70 each \n \n";

// Ask the user how many apples they would like to purchase

    cout << "How many apples would you like to buy? \n";
    cin >> apples;

// Ask how many oranges they would like to purchase

    cout << "How many oranges would you like to buy? \n";
    cin >> oranges;

// Ask how many bananas they would like to purchase

    cout << "How many bananas would you like to buy? \n";
    cin >> bananas;

// Calculate total cost of apples

    double costOfApples = apples * 0.65;

// Calculate total cost of oranges

    double costOfOranges = oranges * .90;

// Calculate total cost of bananas

    double costOfBananas = bananas * .70;

// Calculate total cost of all the fruit

    double total = costOfApples + costOfOranges + costOfBananas;

// Output the invoice for the user on the screen

    cout << "Thank you for your purchase! Please see your invoice: \n \n";
    
    cout << "BOB'S FRUITS GROCERY INVOICE \n \n";
    cout << "---------------------------- \n";
    
    cout << apples << " Apples @ $0.65 each = $" << setprecision(2) << fixed << costOfApples << endl;

    cout << oranges << " Oranges @ $0.90 each = $" << setprecision(2) << fixed << costOfOranges << endl;

    cout << bananas << " Bananas @ $0.70 each = $" << setprecision(2) << fixed << costOfBananas << endl;

    cout << "---------------------------- \n \n";

    cout << "TOTAL = $" << setprecision(2) << fixed << total << endl;

    return 0;

}