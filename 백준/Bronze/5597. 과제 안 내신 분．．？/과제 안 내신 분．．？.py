from sys import stdin
li = list()
li2 = list()
for i in range(28):
    li.append(int(stdin.readline()))
for i in range(30):
    if not(i + 1 in li):
        li2.append(i + 1)
li2.sort()
print(li2[0], li2[1])