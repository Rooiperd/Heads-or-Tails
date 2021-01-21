#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getUserInput() { //gets user's heads or tails call and checks validity of input (not working)

  string input = "";

  while (input != "H" || input != "T") {   //loop to run while input is invalid

   cout << "Input H for Heads or T for Tails" << endl; //request input from user
   cin >> input;

   if (input == "H" || input == "T") { //check validity of input
    return input;
   } else {
    cout << "Invalid input!" << endl;//error message
   }

  }

}


string coinFlip() { //determines heads or tails using built-in pseudo-random number

    srand((int)time(0)); //seed random number based on current time
    int randomValue = (rand() % 100) + 1; //generate random value from 1 to 100
    string result = "";

    if ( randomValue % 2) {
        result = "H";       //if randomvalue is odd, flip is heads
    } else {
        result = "T";       //if randomValue is even, flip is tails
    };

    return result;
}

void compare(string guess, string result) { //compares user's input to coin flip result

    if (guess == result) {
        cout << "Nice! You called correctly!" << endl;
    } else {
        cout << "Sorry, you called incorrectly!" << endl;
    };

}

int main()
{

    string guess = getUserInput();//get user to call heads or tails using H or T respectively
    string result = coinFlip();//flip coin
    cout << "Called: " << guess << " Flipped: " << result << endl; //output results for checking
    compare(guess,result);//compare call vs flip

    return 0;
}
