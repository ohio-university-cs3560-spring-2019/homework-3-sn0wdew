################################################################################
# Program: Homework 4 | hw4.py
# Author: Michael Snider
# Email: ms052916@ohio.edu
# Date: 2-12-2018
#
# Question: If we list all the natural numbers below 10 that are multiples of 3
#           or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find
#           the sum of all the multiples of 3 or 5 below 1000.
################################################################################

maxNumber = 1000
multiples = [3, 5]
numberToAdd = 0
sum = 0

for number in range(maxNumber):
    for multiple in multiples:
        if ( number % multiple == 0):
            numberToAdd = number
    sum += numberToAdd
    numberToAdd = 0

print("Sum of multiples:", sum)
