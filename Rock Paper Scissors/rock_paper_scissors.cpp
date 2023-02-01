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
#include <map>
#include <string>
#include <cstdlib>

using namespace std;


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

    // Initialize maps like dicts in Python
    map <string, int> rps;
    rps["rock"] = 1;
    rps["paper"] = 2;
    rps["scissors"] = 3;

    map <int, string> player_choice;

    // Initialize some more variables
    string player_1, player_2;
    string game = "play";

    // Start of programm logic

    cout << "Play a round of Rock, Paper, Scissors\n";

    while (game == "play") {
        
        // Get player input and validate
        cout << "Player 1: go!\n";
        cin >> player_1;
        cout << "Player 2: go!\n";
        cin >> player_2;

        // Store the choices in a map for later use
        player_choice[rps[player_1]] = "Player 1";
        player_choice[rps[player_2]] = "Player 2";

        // Compare inputs
        int result = abs(rps[player_1] - rps[player_2]);
        int winning_coice;

        switch (result)
        {
        case 0:
            cout << "It's a draw.\n";
            break;
        
        case 1:
            winning_coice = max(rps[player_1], rps[player_2]);
            cout << "Congratiolations.\n";
            cout << player_choice[winning_coice];
            cout << " wins!\n";
            break;
        
        default:
            winning_coice = min(rps[player_1], rps[player_2]);
            cout << "Congratiolations.\n";
            cout << player_choice[winning_coice];
            cout << " wins!\n";
            break;
        }
        game = check_game_end();
    }
    cout << "Thanks for playing.\n";

    return 0;
}