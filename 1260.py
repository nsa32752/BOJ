def dfs(graph, V):
    visited = []
    stack = [V]
    while stack:
        tmp = stack.pop()
        if tmp not in visited:
            visited.append(tmp)
            if tmp in graph:
                nodes = list(set(graph[tmp])-set(visited))
                nodes.sort(reverse=True)
                stack += nodes
    for i in visited:
        print(i, end=" ")
    print()

def bfs(graph, V):
    visited = []
    queue = [V]
    while queue:
        tmp = queue.pop()
        if tmp not in visited:
            visited.append(tmp)
            if tmp in graph:
                nodes = list(set(graph[tmp])-set(visited))
                nodes.sort(reverse=True)
                queue = nodes + queue
    for i in visited:
        print(i, end=" ")



N, M, V = map(int,input().split(" "))
graph={}
for _ in range(M):
    x, y = (map(int, input().split(" ")))
    if x not in graph:
        graph[x] = [y]
    elif y not in graph[x]:
        graph[x].append(y)

    if y not in graph:
        graph[y] = [x]
    elif x not in graph[y]:
        graph[y].append(x)

dfs(graph,V)
bfs(graph,V)
