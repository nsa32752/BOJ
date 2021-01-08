
N = int(input())
lis = [0 for _ in range(N)]

for x in range(N):
    if x==0:
        lis[0]=1
    elif x==1:
        lis[1]=3
    else:
        lis[x]=lis[x-2]*2+lis[x-1]

print(lis[N-1]%10007)

