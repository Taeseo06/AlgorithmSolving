import sys
num = list(map(int, sys.stdin.readline().rstrip().split(' ')))
for i in range(5):
    num[i] = pow(num[i], 2)
print(sum(num) % 10)