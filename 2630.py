def divide(N, matrix, cnt):
    find = []
    for i in matrix:
        for j in i:
            find.append(j)
    if (len(set(find)) == 1):
        if 0 in find:
            cnt[0] += 1
        else:
            cnt[1] += 1
        return cnt
    else:
        if N==2:
            for x in matrix:
                for y in x:
                    if y==0:
                        cnt[0] += 1
                    else:
                        cnt[1] += 1
        else:
            res = [[] for _ in range(4)]
            for k in range(2):
                for i in range(N//2):
                    for j in range(2):
                        res[j+2*k].append(matrix[k*(N//2)+i][j*(N//2):j*(N//2)+N//2])
            for x in res:
                cnt = divide(N//2, x, cnt)
        return cnt


N = int(input())
matrix = []
for x in range (N):
    matrix.append(list(map(int, input().split(" "))))

res = divide(N, matrix, [0,0])
for x in res:
    print(x)
