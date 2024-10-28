import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Subbookkeeper
# 
# Australian Informatics Olympiad 2024
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of letters in the word.
N = 0

# word is the word with one missing letter
word = ""

# Open the input and output files.
input_file = open("bookin.txt", "r")
output_file = open("bookout.txt", "w")

# Read the value of N and the word from the input file.
N = int(input_file.readline().strip())
word = input_file.readline().strip()
word = list(word)





# TODO: This is where you should compute your solution. Store the largest score
# that Rebecca can achieve into the variable answer.
answer = 0

z=word[N-2]


if word[N-1] =='?':
    word.pop(N-1)
    word.append(z)

for i in range(N-1):
    x=word[i]
    y=word[i+1]
    if x == '?':
        word.pop(i)
        word.insert(i,y)

for i in range(N-1):
    if word[i] ==word[i+1]:
            answer += 1
    else: 
        pass










output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()
