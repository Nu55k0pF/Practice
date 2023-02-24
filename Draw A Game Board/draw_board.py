"""
Exercise 24 (and Solution)
This exercise is Part 1 of 4 of the Tic Tac Toe exercise series. The other exercises are: Part 2, Part 3, and Part 4.
Time for some fake graphics! Let’s say we want to draw game boards that look like this:

 --- --- --- 
|   |   |   | 
 --- --- ---  
|   |   |   | 
 --- --- ---  
|   |   |   | 
 --- --- --- 

This one is 3x3 (like in tic tac toe). Obviously, they come in many other sizes (8x8 for chess, 19x19 for Go, and many more).
Ask the user what size game board they want to draw, and draw it for them to the screen using Python’s print statement.
Remember that in Python 3, printing to the screen is accomplished by
  print("Thing to show on screen")

Hint: this requires some use of functions, as were discussed previously on this blog and elsewhere on the Internet, like this TutorialsPoint link.
"""

# Imports


# Modules

def darw_game_board(length: int) -> str:
    horizontal_line = " ---"
    vertical_line = "|   "
    horizontal_end = " \n"
    vertical_end = "|\n"

    line = (horizontal_line*length + horizontal_end) + (vertical_line*length + vertical_end)
    board = line* length + (horizontal_line*length + horizontal_end)

    print(board)


# Script

def main():
    
    board_size = int(input("How large of a game board do you want?\n"))
    darw_game_board(board_size)


if __name__ == "__main__":
    main()
