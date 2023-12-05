import sys
sys.stdin = open("countin.txt", "r")
sys.stdout = open ("countout.txt", "w")

number = int(input())

for i in range(1, 1+ number):
    print(i)
