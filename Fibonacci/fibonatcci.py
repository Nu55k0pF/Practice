"""
Exercise 13 (and Solution)

Write a program that asks the user how many Fibonnaci numbers to generate and then generates them. 
Take this opportunity to think about how you can use functions. 
Make sure to ask the user to enter the number of numbers in the sequence to generate.
(Hint: The Fibonnaci seqence is a sequence of numbers where the next number in the sequence is the sum of the previous two numbers in the sequence. 
The sequence looks like this: 1, 1, 2, 3, 5, 8, 13, …)
Discussion

Practice functions!
"""


# Imports


# Modules

def find_next_fibonatcci_number(fib_second_to_last: int, fib_last: int) -> int:
    """ Add docstring later """

    return fib_second_to_last + fib_last
    

def main ():
    a = 2
    b = 3

    print(find_next_fibonatcci_number (a, b))


if __name__ == "__main__":
    main()