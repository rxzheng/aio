import sys
sys.stdin = open("dishin.txt", "r")
#sys.stdout = open("dishout.txt", "w")

bigness = int(input())


lst = []
for i in range(bigness):
    lst.append(input())
