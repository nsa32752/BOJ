import sys

N = int(input())
time = []
for x in range(N):
    time += [list(map(int, sys.stdin.readline().rstrip("\n").split(" ")))]
time.sort(key=lambda x:(x[1], x[0]))
fin_early = time[0][1]
select = 1
for y in time[1:]:
    if (fin_early <= y[0]):
        select += 1
        fin_early = y[1]
print(select)
