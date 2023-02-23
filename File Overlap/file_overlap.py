"""
Exercise 23 (and Solution)

Given two .txt files that have lists of numbers in them, find the numbers that are overlapping. 
One .txt file has a list of all prime numbers under 1000, and the other .txt file has a list of happy numbers up to 1000.
(If you forgot, prime numbers are numbers that can’t be divided by any other number. 
And yes, happy numbers are a real thing in mathematics - you can look it up on Wikipedia. 
The explanation is easier with an example, which I will describe below.)
"""


# Modules

def read_file(rel_path: str) -> list:
    with open(rel_path, "r") as f:
        lines = f.read().splitlines()
        lines = change_str_to_int(lines)
    return lines


def change_str_to_int(list_of_strings: list) -> list:
    return [int(string) for string in list_of_strings]


# Script

def main():
    
    primes = read_file("File Overlap\primes.txt")
    happy = read_file("File Overlap\happy.txt")
    overlap = [num for num in primes if num in happy]
    print(overlap)

if __name__ == "__main__":
    main()