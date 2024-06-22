// Maya Thompson
// CS 1, Section #0107
// Assignment #1, Problem #3
// Summary: This program produces an adventure game called Lost Fortune that includes a band of explorers that find a stash of 750 gold pieces


#include <iostream>

using namespace std;

// Define and initialize variables that store users input
int explorers = 0;
int lostExplorers = 0;

int main() 
{

    cout << "Welcome to Lost Fortune! \n \n";

// Ask player for the number of explorers

    cout << "Please answer the following questions for your personalized adventure: \n \n";
    cout << "Enter the number of Explorers: \n";
    cin >> explorers;

// Ask player for the number of explorers lost in battle

    cout << "Enter the number of Explorers Lost in Battle: \n";
    cin >> lostExplorers;

// Calculate the number of explorers that survived

    int survivors = explorers - lostExplorers;

// Output the number of explorers, that they fought ogres, the number of lost members, and number of those who survived

    cout << "You bravely led " << explorers << " adventurers on a quest for gold. \n";
    cout << "The group fought a band of ogres and lost " << lostExplorers << " members \n";
    cout << "Only " << survivors << " survived. \n";

// Calculate the remainder left over for the player after pieces are evenly distributed

    int goldRemaining = 750 % survivors;

//  Output the end of the story that includes the amount of gold the player keeps

    cout << "The party was about to give up when they stumbled upon the buried fortune of 750 gold pieces. The group split the loot evenly and as the quest leader you kept the extra " << goldRemaining <<  " gold pieces.";

    return 0;
}