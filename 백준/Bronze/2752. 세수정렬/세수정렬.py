import sys
li = list(map(int, sys.stdin.readline().rstrip().split()))
li.sort()
for i in li:
    print(i, end=' ')