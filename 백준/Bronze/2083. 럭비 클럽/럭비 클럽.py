import sys
while True:
    input = sys.stdin.readline().rstrip().split(' ')
    if input[0] == "#":
        sys.exit()
    if int(input[1]) > 17 or int(input[2]) >= 80:
        print(input[0], "Senior")
    else:
        print(input[0], "Junior")