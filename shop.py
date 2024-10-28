import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Shopping Spree
# 
# Australian Informatics Olympiad 2024
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of items.
N = 0

# K is the number of coupons.
K = 0

# costs contains the costs of the items.
costs = []

# Open the input and output files.
input_file = open("shopin.txt", "r")
output_file = open("shopout.txt", "w")

# Read the value of N, K, and the costs from the input file.
input_line = input_file.readline().strip()
N, K = map(int, input_line.split())
input_line = input_file.readline().strip()
costs = list(map(int, input_line.split()))

# TODO: This is where you should compute your solution. Store the minimum cost
# to buy all N items into the variable answer.

answer = 0


a = 1
b = len(costs)



for i in range(K):
    answer += costs[a]
    print(f'added1', costs[0])
    a += 1
    b -= 1
    print(f'a is', a)
    print(f'b is', b)
for i in range(int((int((b+1)/2)))):
    answer += int(costs[b-1])
    print(f'added', int(costs[b-1]))
    print(f'list is', costs)
    print(f'cost is',costs[len(costs)-2])
    b-=2

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()
