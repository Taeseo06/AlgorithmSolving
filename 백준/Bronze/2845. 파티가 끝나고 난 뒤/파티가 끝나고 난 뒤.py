import sys
n, m = map(int, sys.stdin.readline().rstrip().split(' '))
li = list(map(int, sys.stdin.readline().rstrip().split(' ')))
for i in range(5):
    print(-1 * (n * m - li[i]), end=' ')