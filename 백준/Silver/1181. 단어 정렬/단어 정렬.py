import sys
num = int(sys.stdin.readline())
word = set()

for i in range(num):
    # word.append(sys.stdin.readline().rstrip())
    word.add(sys.stdin.readline().rstrip())
    
word = list(word)
word.sort()

for i in range(len(word)):
    for j in range(len(word) - 1):

        if len(word[j]) > len(word[j + 1]):
            temp = word[j]
            word[j] = word[j + 1]
            word[j + 1] = temp
        else:
            continue
for i in word:
    print(i)