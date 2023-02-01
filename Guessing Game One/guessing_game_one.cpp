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
#include <sstream>
#include <limits>

using namespace std;

string check_game_end(){
    
    string player_input = "play";
    cout << "'If you want to play another round press enter, if you want to exit type 'exit':";
    cin >> player_input;
    if (player_input == "exit"){
        return player_input;
    }
    else {
        return "play";
    }
}

int main(){

    /*Initializing Variables*/

    // Initialize the randome seed
    srand(time(NULL));

    // Set gamestate
    string game = "play";
    int trys = 0;

    cout << "Welcome! Lets play a guessing game.\n";

    // Start the game loop
    while (game != "exit"){

        // Generate a pseudorandome number
        int random_number = rand() % 9 + 1;
        int user_number;

        
        // Get validated user input
        while (true) {
        cout << "Guess a number from 1 to 9:\n";
        if (cin >> user_number) {
            break;
        } else {
            cout << "Enter a valid integer value!\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }

        // Check if the guess is correct
        if (user_number > random_number){
            cout << "You guessed to high.\n";
            ++trys;
        }
        else if ( user_number < random_number){
            cout << "You guessed to low.\n";
            ++trys;
        }
        else if (user_number == random_number){
            cout << "You guessed correctly! ";
            ++trys;
        }
        else {
            cout << "Please guess a number from 1 to 9.";
        }
        // Ask the user for another round
        game = check_game_end();
    }

    cout << "Thank you for playing, you guessed ";
    cout << trys;
    cout << " times";

    return 0;
}