import sys

N, K= map(int, sys.stdin.readline().rstrip("\n").split(" "))
value = []
res = 0
for x in range(N):
    value.append(int(input()))
value.reverse()
for y in value:
    if (K//y)>0:
        res += K//y
        K -= y*(K//y)
print(res)
