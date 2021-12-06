"""
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below the provided parameter value number.
"""

def multiplesOf3and5(number):
    sum = 0
    for x in range(number):
        if x % 3 == 0 or x % 5 == 0:
            sum += x
    return sum


print(multiplesOf3and5(10))
print(multiplesOf3and5(49))
print(multiplesOf3and5(1000))
print(multiplesOf3and5(8456))
print(multiplesOf3and5(19564))
