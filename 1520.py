import sys
sys.setrecursionlimit(10**7)
N,M = map(int,input().split(" "))
maze = []
visit = [[-1 for _ in range(M)] for _ in range(N)]
for _ in range(N):
    maze.append(list(map(int, sys.stdin.readline().split(" "))))

def brute(i,j):
    if i==N-1 and j==M-1:
        return 1
    if visit[i][j] == -1:
        visit[i][j]=0
        if 0<i+1<N and maze[i][j]>maze[i+1][j]:
            visit[i][j] += brute(i+1, j)
        if 0<=i-1<N and maze[i][j]>maze[i-1][j]:
            visit[i][j] += brute(i-1, j)
        if 0<j+1<M and maze[i][j]>maze[i][j+1]:
            visit[i][j] += brute(i, j+1)
        if 0<=j-1<M and maze[i][j]>maze[i][j-1]:
            visit[i][j] += brute(i, j-1)
    return visit[i][j]

print(brute(0,0))


