def mul(N, matrix1, matrix2):
    res = [[0 for _ in range(N)] for _ in range(N)]
    for i in range(N):
        for j in range(N):
            for k in range(N):
                res[i][j] += matrix1[i][k]*matrix2[k][j]
            res[i][j] %= 1000
    return res

def divide(N, B, matrix):
    if B==1:
        return matrix
    elif B==2:
        return mul(N, matrix, matrix)
    else:
        tmp = divide(N, B//2, matrix)
        if B%2==0:
            return mul(N, tmp, tmp)
        else:
            return mul(N, mul(N, tmp, tmp), matrix)

N, B = map(int, input().split(" "))
matrix = []
for x in range (N):
    matrix.append(list(map(int, input().split(" "))))

matrix = divide(N, B, matrix)

for x in range(N):
    for y in range(N):
        print(matrix[x][y]%1000, end=" ")
    print()

