import copy

def infection(N, M, test):
    lis = []
    for i in range(N):
        for j in range(M):
            if(test[i][j]==2):
                lis.append([i,j])
    while(len(lis)!=0):
        i, j = lis[0]
        if(i-1>=0 and test[i-1][j]==0):
            test[i-1][j]=2
            lis.append([i-1,j])
        if(i+1<N and test[i+1][j]==0):
            test[i+1][j]=2
            lis.append([i+1,j])
        if(j-1>=0 and test[i][j-1]==0):
            test[i][j-1]=2
            lis.append([i,j-1])
        if(j+1<M and test[i][j+1]==0):
            test[i][j+1]=2
            lis.append([i,j+1])
        lis = lis[1:]
    return test


def zerocount(test):
    cnt = 0
    for x in test:
        for y in x:
           if y==0:
               cnt+=1
    return cnt

N, M = map(int, input().split(" "))
lab = []
res=0
for x in range(N):
    lab.append(list(map(int, input().split(" "))))

for i in range(N*M):
    test=copy.deepcopy(lab)
    if(test[i//M][i%M]==0):
        test[i//M][i%M] = 1
        for j in range(i,N*M):
            if(test[j//M][j%M]==0):
                test[j//M][j%M]=1
                for k in range(j, N*M):
                    if(test[k//M][k%M]==0):
                        test[k//M][k%M]=1
                        test2 = copy.deepcopy(test)
                        cnt=0
                        test2 = infection(N, M, test2)
                        cnt = zerocount(test2)
                        res = max(res, cnt)
                        test[k//M][k%M]=0
                test[j//M][j%M]=0
print(res)
