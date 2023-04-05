import sys
num1, num2 = map(int, sys.stdin.readline().rstrip().split())
print(f'{num1 // num2}\n{num1 % num2}')