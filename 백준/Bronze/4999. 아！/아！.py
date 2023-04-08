import sys
str1 = sys.stdin.readline().rstrip()
str2 = sys.stdin.readline().rstrip()
if str2 in str1:
    print("go")
else:
    print("no")