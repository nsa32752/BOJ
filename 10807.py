num = int(input())

list = [0] *num

for x in range(0,num):
    list[x] = int(input())

what = int(input())

count = list.count(what)

print(count)