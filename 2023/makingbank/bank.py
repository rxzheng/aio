#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Making Bank
# 
# Australian Informatics Olympiad 2023
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of days.
N = None

# days contains the type of each day.
days = None

# Open the input and output files.
input_file = open("bankin.txt", "r")
output_file = open("bankout.txt", "w")

# Read the value of N and the string of characters from the input file.
N = int(input_file.readline().strip())
days = list(input_file.readline().strip())

# TODO: This is where you should compute your solution. Store the most money
# that you can retire with into the variable answer.

if N % 2 == 1:
    good = N // 2 + 1
elif N % 2 == 0:
    good = N // 2

print(good)
s = 1
answer = 0


for i in days:
    if i == "C" and (days.index(i) + 1 in range(1, 5)):
        s += 1
        print("s " + str(s))
    elif i == "C" and (days.index(i) + 1 not in range(1, 5)):
        answer += s
        print("answer1 " + str(answer))
    elif i == "M":
        answer += s
        print("answer " + str(answer))
print(answer)





# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()
