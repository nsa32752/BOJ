def divide(N, matrix, cnt):
    find = []
    for i in matrix:
        for j in i:
            find.append(j)
    if (len(set(find)) == 1):
        if -1 in find:
            cnt[0] += 1
        elif 0 in find:
            cnt[1] += 1
        else:
            cnt[2] += 1
        return cnt
    else:
        if N==3:
            for x in matrix:
                for y in x:
                    if y==-1:
                        cnt[0] += 1
                    elif y==0:
                        cnt[1] += 1
                    else:
                        cnt[2] += 1
        else:
            res = [[] for _ in range(9)]
            for k in range(3):
                for i in range(N//3):
                    for j in range(3):
                        res[j+3*k].append(matrix[k*(N//3)+i][j*(N//3):j*(N//3)+N//3])
            for x in res:
                cnt = divide(N//3, x, cnt)
        return cnt


N = int(input())
matrix = []
for x in range (N):
    matrix.append(list(map(int, input().split(" "))))

res = divide(N, matrix, [0,0,0])
for x in res:
    print(x)
