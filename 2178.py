N, M= map(int, input().split(" "))
maze = []
graph = {}
for _ in range(N):
    tmp=[]
    for i in input():
        tmp.append(int(i))
    maze.append(tmp)

x=[0,-1,0,1]
y=[-1,0,1,0]


stack = [[0,0]]
res = 0
weight = [[0 for _ in range(M)] for _ in range(N)]
while stack:
    loc = stack.pop()
    if maze[loc[0]][loc[1]]==1:
        maze[loc[0]][loc[1]] = 0
        res+=1
        tmp=[]
        for i in range(4):
            if 0<=loc[0]+y[i]<=N-1 and 0<=loc[1]+x[i]<=M-1:
                if maze[loc[0]+y[i]][loc[1]+x[i]]==1:
                    if weight[loc[0]+y[i]][loc[1]+x[i]] != 0:
                        weight[loc[0]+y[i]][loc[1]+x[i]] = min(weight[loc[0]][loc[1]]+1, weight[loc[0]+y[i]][loc[1]+x[i]])
                    else:
                        weight[loc[0]+y[i]][loc[1]+x[i]] = min(weight[loc[0]][loc[1]]+1, res)
                    tmp.append([loc[0]+y[i], loc[1]+x[i]])
        stack = tmp + stack

print(weight[-1][-1]+1)
