#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Shoptimality
# 
# Australian Informatics Olympiad 2023
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of houses.
N = None

# M is the number of supermarkets.
M = None

# H contains the locations of the houses. Note that here the houses are
# numbered starting from 0.
H = []

# S contains the locations of the supermarkets. Note that here the supermarkets
# are numbered starting from 0.
S = []

# P contains the price factors of the supermarkets. Note that here the
# supermarkets are numbered starting from 0.
P = []

# answers[i] should store the badness of the best supermarket for the i-th
# house. Note that here the houses are numbered starting from 0.
answers = []

# Open the input and output files.
input_file = open("shopin.txt", "r")
output_file = open("shopout.txt", "w")

# Read the values of N, M, H, S and P from input file.
input_line = input_file.readline().strip()
N, M = map(int, input_line.split())
input_line = input_file.readline().strip()
H = list(map(int, input_line.split()))
input_line = input_file.readline().strip()
S = list(map(int, input_line.split()))
input_line = input_file.readline().strip()
P = list(map(int, input_line.split()))

# TODO: This is where you should compute your solution. For each house, find
# the badness of the best supermarket, and store these values into the list
# answers.

# Write the answers to the output file.
for i in range(0, N):
    output_file.write(str(answers[i]) + " ")

# Finally, close the input/output files.
input_file.close()
output_file.close()
