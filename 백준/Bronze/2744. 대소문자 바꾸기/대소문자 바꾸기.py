import sys
input = sys.stdin.readline().rstrip()
s = ''
for i in input:
    if i <= 'Z':
        s += i.lower()
    elif i >= 'a':
        s += i.upper()
print(s)