import sys

def brute(N, maze, visit):
    for i in range(N):
        for j in range(N):
            if (i!=N-1 or j!=N-1) and visit[i][j] >= 1:
                if i+maze[i][j]<N:
                    visit[i+maze[i][j]][j] += visit[i][j]
                if j+maze[i][j]<N:
                    visit[i][j+maze[i][j]] += visit[i][j]
    print(visit[N-1][N-1])

N = int(input())
maze = []
visit = [[0 for _ in range(N)] for _ in range(N)]
visit[0][0] = 1
for _ in range(N):
    maze.append(list(map(int, sys.stdin.readline().split(" "))))
brute(N, maze, visit)


