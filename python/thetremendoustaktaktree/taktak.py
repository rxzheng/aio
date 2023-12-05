import sys
sys.stdin = open("taktakin.txt", "r")
sys.stdout = open("taktakout.txt", "w")

fruit = int(input())
days = 0

while True:
    if fruit % 11 == 1:
        print(days, fruit)
        break
    else:
        fruit = fruit * 2
        days += 1