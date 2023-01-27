'''
Exercise 8

Make a two-player Rock-Paper-Scissors game. 
(Hint: Ask for player plays (using input), compare them, print out a message of congratulations to the winner,
and ask if the players want to start a new game)

Remember the rules:

    Rock beats scissors
    Scissors beats paper
    Paper beats rock
'''

'''
rock = 1, paper = 2, scissors = 3
paper 2 beats - rock 1 = 1
scissors 3 beats - paper 2 = 1
rock 1 - beats scissors 3 = -1 

If the numbers are consecutive and thier distance is 1 then the bigger number wins. 
If the numbers are not consecutive then the smaller number wins

'''


# Modules

def get_player_input():
    player_input = input()
    if player_input == 'play' or player_input ==  'exit':
        return player_input
    else:
        print('Not a valid coice. Please choose between "play" or "exit".')
        get_player_input()
        

# Declare variables

rps = {
    'rock' : 1,
    'paper' : 2,
    'scissors' : 3}

player_choice = {}


player_1 = str()
player_2 = str()

game = 'play'

# Start of script

print('Play a round of Rock, Paper, Scissors\n')

while game == 'play':

    # Get player input and validate
    player_1 = input('Player 1: go!\n')
    if player_1 in rps:
        pass
    else:
        input("That's not a valid choice. Choose between rock, paper, scissors.\n Press enter to start again")
        continue

    player_2 = input('Player 2: go!\n')
    if player_2 in rps:
        pass
    else:
        input("That's not a valid choice. Choose between rock, paper, scissors.\n Press enter to start again")
        continue

    # Store the choice in a dict for later the key is the corresponding number of rock paper or scissors
    player_choice[rps[player_1]] = 'Player 1'
    player_choice[rps[player_2]] = 'Player 2'

    # Compare inputs
    # Check if its a draw
    if abs(rps[player_1] - rps[player_2]) == 0:
        print("It's a draw")

    # Check if its rock v paper or scissors v paper and determin who won
    elif abs(rps[player_1] - rps[player_2]) == 1:
        winning_coice = max(rps[player_1], rps[player_2])
        print('Congratiulations {} wins!'.format(player_choice[winning_coice]))

    # Check for the szenario rock v scissors
    elif abs(rps[player_1] - rps[player_2]) != 1:
        winning_coice = min(rps[player_1], rps[player_2])
        print('Congratiulations {} wins!'.format(player_choice[winning_coice]))

    # Check if the player wants to play again
    print('If you want to play another game type "play", if you want to exit type "exit":')
    game = get_player_input()

print('Thank you for playing')

