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


# Modules

def generate_fibonatcci_sequence(length: int) -> list:
    """ Creates a fibonacci sequence of a given length. """

    fibonacci_sequence = [1, 1] # Sequence must be initialiced for edge cases like length 1 or 2.
    if length == 1:
        return fibonacci_sequence[:1] # Edecase if length = 1
    elif length == 2:
        return fibonacci_sequence[:2] # Edge case if length = 2
    elif length > 2:
        length -= 2
        while length > 0:
            fibonacci_sequence.append(fibonacci_sequence[-2], fibonacci_sequence[-1])
            length -= 1
        return fibonacci_sequence
        

def main ():
    
    a = 10
    print(generate_fibonatcci_sequence(a))


if __name__ == "__main__":
    main()