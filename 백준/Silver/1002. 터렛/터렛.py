# 백준문제 1002 터렛

import sys
import math
num = int(sys.stdin.readline())
output = list()
for i in range(num):
    x1, y1, r1, x2, y2, r2 = map(int, sys.stdin.readline().split())
    distance2 = math.sqrt(abs(x1 - x2) ** 2 + abs(y1 - y2) ** 2)

    if distance2 == 0 and r1 == r2:
        print(-1)
    elif abs(r1 - r2) == distance2 or r1 + r2 == distance2:
        print(1)
    elif abs(r1 - r2) < distance2 < (r1 + r2):
        print(2)
    else:
        print(0)