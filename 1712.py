inp = list(input().split())
A = int(inp[0])
B = int(inp[1])
C = int(inp[2])
if(B==C):
    print(-1)
else:
    ans = int(A/(C-B))
    if(ans<0):
        print(-1)
    else:
        print(ans+1)
