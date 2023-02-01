/*
Exercise 9

Generate a random number between 1 and 9 (including 1 and 9). Ask the user to guess the number, 
then tell them whether they guessed too low, too high, or exactly right. 
(Hint: remember to use the user input lessons from the very first exercise)

Extras:

    Keep the game going until the user types “exit”
    Keep track of how many guesses the user has taken, and when the game ends, print this out.
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string check_game_end(){
    cout << "'If you want to play another round press enter, if you want to exit type 'exit':";
    
}

int main(){

    /*Initializing Variables*/

    // Initialize the randome seed
    srand(time(NULL));

    // Set gamestate
    string game = "play";

    cout << "Welcome! Lets play a guessing game.\n";

    while (game != "exit"){

        // Generate a pseudorandome number
        int random_number = rand() % 10;
        int trys = 0;
        int user_number;

        cout << "Guess a number from 1 to 9:\n";
        cin >> user_number;

        if (user_number > random_number){
            cout << "You guessed to high.";
            ++trys;
        }
        if else ( user_number < random_number){
            cout << "You guessed to low.";
            ++trys;
        }
        if else (user_number == random_number){
            cout << "You guessed correctly!"
            ++trys;
        }
        else {
            cout << "Please guess a number from 1 to 9."
        }

    }
    

    return 0;
}