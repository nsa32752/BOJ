x = int(input())

list1 = [0]*x

for i in range(0,x):
    list1[i] = int(input())

list1.sort()

print(list1)