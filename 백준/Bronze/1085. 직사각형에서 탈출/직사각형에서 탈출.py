import sys
import math

x, y, w, h = map(int, sys.stdin.readline().rstrip().split())

p1x, p1y = 0, y; p2x, p2y = x, h; p3x, p3y = w, y; p4x, p4y = x, 0

li = list()
li.append(int(math.sqrt(math.pow((p1x - x), 2) + math.pow((p1y - y), 2))))
li.append(int(math.sqrt(math.pow((p2x - x), 2) + math.pow((p2y - y), 2))))
li.append(int(math.sqrt(math.pow((p3x - x), 2) + math.pow((p3y - y), 2))))
li.append(int(math.sqrt(math.pow((p4x - x), 2) + math.pow((p4y - y), 2))))
print(min(li))