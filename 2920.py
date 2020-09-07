list1 = [0] *8

for x in range(0,8):
    list1[x] = int(input())

print(list1)
ascending = 0
descending = 0
y=0

while(True):
    print(y)
    if y > 7:
        if(ascending == 8):
            print("ascending")
        elif(descending == 8):
            print("descending")
        else:
            print("mixed")
        break
    elif (list1[y] == (y+1)):
        print(list1[y])
        ascending += 1
    elif list1[y] == 8-y:
        descending += 1
    y+=1
