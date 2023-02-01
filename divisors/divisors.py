'''
Create a program that asks the user for a number and then prints out a list of all the divisors of that number. 
(If you don’t know what a divisor is, it is a number that divides evenly into another number
For example, 13 is a divisor of 26 because 26 / 13 has no remainder.)
'''

# ask for user input
number = int(input("Give a number: "))

# create a list of all the numbers to test
numbers_to_test = range (2, number+1)

# creat a list with all the numbers that devide 'number' evenly
divisors = [num for num in numbers_to_test if number % num == 0]

# print out the all solutions
print(divisors)