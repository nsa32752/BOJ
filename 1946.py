import sys
T = int(input())
for x in range(T):
    N = int(input())
    new = []
    man = 1
    for y in range(N):
        new += [list(map(int, sys.stdin.readline().rstrip("\n").split(" ")))]
    new.sort()
    bound = new[0][1]
    for l in range(1,N):
        if bound > new[l][1]:
            bound = new[l][1]
            man += 1
    print(man)
