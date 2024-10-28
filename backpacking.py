import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Backpacking
# 
# Australian Informatics Olympiad 2024
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of towns.
N = 0

# K is the maximum number of cans that Norman can fit in his backpack.
K = 0

# D contains the distances between the towns. Note that the list starts from 0,
# and so the values are D[0] to D[N-2].
D = []

# C contains the cost of food in each town. Note that the list starts from 0,
# and so the values are C[0] to C[N-1].
C = []

# Open the input and output files.
input_file = open("backin.txt", "r")
output_file = open("backout.txt", "w")

# Read the values of N, K, D, and C from the input file.
input_line = input_file.readline().strip()
N, K = map(int, input_line.split())
input_line = input_file.readline().strip()
D = list(map(int, input_line.split()))
input_line = input_file.readline().strip()
C = list(map(int, input_line.split()))

# TODO: This is where you should compute your solution. Store the minimum total
# amount that Norman must spend into the variable answer.

answer = 0
for i in range(len(C)):
    
cans = 0

for i in range(len(C)):
    if C[i] < C[i+1]
    answer += 


# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()
