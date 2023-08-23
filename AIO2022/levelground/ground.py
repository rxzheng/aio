#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Level Ground
# 
# Australian Informatics Olympiad 2022
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of segments.
N = None

# A contains the altitude of the segments.
A = []

answer = None

# Open the input and output files.
input_file = open("groundin.txt", "r")
output_file = open("groundout.txt", "w")

# Read the value of N.
N = int(input_file.readline().strip())

# Read the altitudes.
input_line = input_file.readline().strip()
A = list(map(int, input_line.split()))

# TODO: This is where you should compute your solution. Store the highest
# intensity that can be achieved into the variable answer.

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()
