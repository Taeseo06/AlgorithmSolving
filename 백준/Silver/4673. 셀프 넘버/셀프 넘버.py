li = list()

for i in range(1, 10001):
    li.append(i)

for i in range(1, 100000):
    num = i
    while i > 0:
        num += i % 10
        i //= 10
    if num in li and num != i:
        li.remove(num)

for i in li:
    print(i)