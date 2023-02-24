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
    for i in range(length):
        print(draw_horizontal_line(length))
        print(draw_vertical_line(length))
    print(draw_horizontal_line(length))


def draw_horizontal_line(length: int) -> str:
    line = " ---" * length
    return line


def draw_vertical_line(length: int) -> str:
    line = "|   " * length + "|"
    return line


# Script

def main():
    
    board_size = int(input("How large of a game board do you want?\n"))
    darw_game_board(board_size)


if __name__ == "__main__":
    main()