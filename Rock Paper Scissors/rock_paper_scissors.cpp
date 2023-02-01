/*
Exercise 8

Make a two-player Rock-Paper-Scissors game. 
(Hint: Ask for player plays (using input), compare them, print out a message of congratulations to the winner,
and ask if the players want to start a new game)

Remember the rules:

    Rock beats scissors
    Scissors beats paper
    Paper beats rock

How to dictionary in C++
https://www.codespeedy.com/dictionary-in-cpp/
*/

// Imports

#include <iostream>


// Modules

string check_game_end(){
    
    string player_input = "play";
    cout << "'If you want to play another round enter something, if you want to exit type 'exit':";
    cin >> player_input;
    if (player_input == "exit"){
        return player_input;
    }
    else {
        return "play";
    }
}


int main (){

}