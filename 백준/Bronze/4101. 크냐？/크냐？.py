import sys
while True:
    a, b = map(int, sys.stdin.readline().rstrip().split(' '))
    if not(a) and not(b):
        break
    if a > b:
        print("Yes")
    else:
        print("No")