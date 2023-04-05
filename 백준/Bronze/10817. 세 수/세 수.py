import sys
li = sys.stdin.readline().rstrip().split(' ')
li = list(map(int, li))
li.sort()
print(li[1])