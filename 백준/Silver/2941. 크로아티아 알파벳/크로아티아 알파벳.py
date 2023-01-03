from sys import stdin

list = ['c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
input = stdin.readline()
count = 0

re = input.replace('c=', '5')

for i in list:
    re = re.replace(i, '5')
print(len(re)-1)