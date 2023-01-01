from sys import stdin
h, m = map(int, stdin.readline().split())
if m >= 45:
    m -= 45
elif h:
    h -= 1
    m += 15
else:
    h = 23
    m += 15
print(h, m)
