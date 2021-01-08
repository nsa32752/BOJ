import sys

def brute(N, M, maze):
    for i in range(N):
        for j in range(M):
            if i==0 and j==0:
                maze[i][j] = maze[0][0]
            elif 0<i<N and 0<j<M:
                maze[i][j] = maze[i][j]+max(maze[i-1][j], maze[i][j-1], maze[i-1][j-1])
            elif i==0:
                maze[i][j] = maze[i][j]+maze[i][j-1]
            elif j==0:
                maze[i][j] = maze[i][j]+maze[i-1][j]
    print(maze[N-1][M-1])

N, M = map(int,input().split(" "))
maze = []
for _ in range(N):
    maze.append(list(map(int, sys.stdin.readline().split(" "))))
brute(N, M, maze)
