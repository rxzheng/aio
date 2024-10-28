import sys
#sys.stdin = open("filein.txt", "r")
sys.stdout = open("fileout.txt", "w")

n = input()

count = 0
biggest = 0

d = list(map(str, input().split()))

for i in range(len(d)):

    if d[i] > biggest:
        biggest = d[i]
        count += 1

print(count)

