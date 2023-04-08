import sys
h, m, s = map(int, sys.stdin.readline().rstrip().split(' '))
t = int(sys.stdin.readline())

s += (t % 60)
m += (t % 3600 // 60) + (s // 60)
h += ((t // 3600) + (m // 60))

s %= 60; m %= 60; h %= 24
print(h, m , s)