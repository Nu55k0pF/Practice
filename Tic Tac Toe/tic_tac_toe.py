"""
Exercise 26

This exercise is Part 2 of 4 of the Tic Tac Toe exercise series. The other exercises are: Part 1, Part 3, and Part 4.
As you may have guessed, we are trying to build up to a full tic-tac-toe board. However, this is significantly more than half an hour of coding, 
so we’re doing it in pieces.Today, we will simply focus on checking whether someone has WON a game of Tic Tac Toe, not worrying about how the moves were made.
If a game of Tic Tac Toe is represented as a list of lists, like so:

game = [[1, 2, 0],
	[2, 1, 0],
	[2, 1, 1]]

where a 0 means an empty square, a 1 means that player 1 put their token in that space, and a 2 means that player 2 put their token in that space.
Your task this week: given a 3 by 3 list of lists that represents a Tic Tac Toe game board, tell me whether anyone has won, and tell me which player won, 
if any. A Tic Tac Toe win is 3 in a row - either in a row, a column, or a diagonal. Don’t worry about the case where TWO people have won - 
assume that in every board there will only be one winner.

Here are some more examples to work with:

winner_is_2 = [[2, 2, 0],
	[2, 1, 0],
	[2, 1, 1]]

winner_is_1 = [[1, 2, 0],
	[2, 1, 0],
	[2, 1, 1]]

winner_is_also_1 = [[0, 1, 0],
	[2, 1, 0],
	[2, 1, 1]]

no_winner = [[1, 2, 0],
	[2, 1, 0],
	[2, 1, 2]]

also_no_winner = [[1, 2, 0],
	[2, 1, 0],
	[2, 1, 0]]
"""


# Imports


# Modules

def is_win(row: list):
    if len(set(row)) == 1 and 0 not in set(row):
        print("the winner is player {}".format(row[0]))
    else:
        pass


# Script

def main():

    # Initialize game state
    game =[
        [2, 2, 0],
        [2, 1, 0],
        [2, 1, 1]]

    # Check if any row has a win condition
    for list in game:
        is_win(list)

    # Check if any column has a win condition
    y = 0

    while y < len(game):
        temp = []
        x = 0
        while x < len(game):
            temp.append(game[x][y])

            x += 1
        is_win(temp)
        y += 1

    # Check Diagonal 1
    y = 0 
    x = 0
    temp =[]

    while y < len(game):
        
        temp.append(game[x][y])
        x += 1 
        y += 1

    is_win(temp)

    # Check Diagonal 2
    y = 2 
    x = 0
    temp =[]    
    
    while x < len(game):
        
        temp.append(game[x][y])
        x += 1
        y -= 1

    is_win(temp)
    
    
if __name__ == "__main__":
    main()