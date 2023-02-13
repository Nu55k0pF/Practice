"""
Do some Tests with classes and how they work
"""

class MyClass():
    def __init__(self, strength: int) -> None:
        self.strength = strength

    def print_stuff(self) -> None:
        print(self.strength)

a = MyClass(1)
print(a.strength) 
a.print_stuff()