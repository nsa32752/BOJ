N = int(input())
A = list(map(int, input().split(" ")))
M = int(input())
B = list(map(int, input().split(" ")))
A.sort()
for x in B:
    left = 0
    right = len(A)-1
    while(left <= right):
        mid = A[(left+right)//2]
        if x == mid:
            print(1)
            break
        elif x < mid:
            right = (left+right)//2-1
        elif x > mid:
            left = (left+right)//2+1
        else:
            print(0)

        if(left>right):
            print(0)
            break
