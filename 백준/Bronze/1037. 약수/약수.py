import sys
num = int(sys.stdin.readline())
li = list(map(int, sys.stdin.readline().rstrip().split(' ')))
li.sort()
print(li[0] * li[num-1])