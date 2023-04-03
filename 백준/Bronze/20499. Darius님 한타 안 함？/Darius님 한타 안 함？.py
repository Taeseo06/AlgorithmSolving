import sys
input = sys.stdin.readline().rstrip().split('/')

K, D, A = map(int, input)

print("hasu") if K + A < D or D == 0 else print("gosu")