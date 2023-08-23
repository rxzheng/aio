#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Election II
# 
# Australian Informatics Olympiad 2022
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of votes.
N = None

# votes contains the sequence of votes.
votes = None

answer = None

# Open the input and output files.
input_file = open("elecin.txt", "r")
output_file = open("elecout.txt", "w")

# Read the value of N and the votes from the input file.
N = int(input_file.readline().strip())
votes = input_file.readline().strip()

# TODO: This is where you should compute your solution. Store the winning
# candidate ('A', 'B' or 'C'), or 'T' if there is a tie, into the variable
# answer.
answer = "Hi"
list = []
for i in votes:
    list.append(i)
print(list)

a, b, c = 0, 0, 0
for "A" in list:
    a += 1
for "B" in list:
    b += 1
for "C" in list:
    c += 1
print(a)
print(b)
print(c)
# Write the answer to the output file.
output_file.write(answer + "\n")

# Finally, close the input/output files.
input_file.close()
output_file.close()
