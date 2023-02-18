'''
Exercise 2 (and Solution)

The exercise comes first (with a few extras if you want the extra challenge or want to spend more time), followed by a discussion. Enjoy!

Ask the user for a number. Depending on whether the number is even or odd, print out an appropriate message to the user. 
Hint: how does an even / odd number react differently when divided by 2?

Extras:

    1. If the number is a multiple of 4, print out a different message.
    2. Ask the user for two numbers: one number to check (call it num) and one number to divide by (check). If check divides evenly into num, tell that to the user. 
    If not, print a different appropriate message.
'''

# Ask the user for input
u_number = int(input("Give me a randome number. "))

if u_number % 2 == 0 and u_number % 4 == 0:
    print('{} is a multiple of 4.'.format(u_number))
elif u_number % 2 == 0:
    print('{} is an even number'.format(u_number))
else:
    print('{} is an odd number'.format(u_number))

num = int(input('Now give me a different number to devide: '))
div = int(input('Now give me a number to devide by: '))

if num % div == 0:
    print('Your numbers devide evenly.')
else:
    print("Your numbers don't devide evenly.")