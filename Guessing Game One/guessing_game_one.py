'''
Exercise 9

Generate a random number between 1 and 9 (including 1 and 9). Ask the user to guess the number, 
then tell them whether they guessed too low, too high, or exactly right. 
(Hint: remember to use the user input lessons from the very first exercise)

Extras:

    Keep the game going until the user types “exit”
    Keep track of how many guesses the user has taken, and when the game ends, print this out.
'''



# Imports
 
import random


# Modules

def check_game_end():
    '''A function to validat user input. Used to determine if the game should end or not.'''

    print('If you want to play another round press enter, if you want to exit type "exit":')
    player_input = input()
    if player_input ==  'exit':
        return player_input
    else:
        pass


def main():
    
    print('Welcome! Lets play a guessing game.\n')
    
    game = 'play'

    while game != 'exit':
        randnum = random.randint(1, 9)

        unum = int(input('Guess a number from 1 to 9:\n'))

        trys = 0

        if unum > randnum:
            print('You guessed to high.')
            trys += 1
        elif unum < randnum:
            print('You guessed to low.')
            trys += 1
        elif unum == randnum:
            print('You geuessed correctly!')
            trys += 1
        else:
            print('Please guess a number from 1 to 9')

        game = check_game_end()

    print('Thank you for playing, you guessed {} times'.format(trys))


if __name__ == "__main__":

    main()