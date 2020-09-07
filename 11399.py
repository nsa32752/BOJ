import sys

N = int(input())
time = list(map(int, sys.stdin.readline().rstrip("\n").split(" ")))
time.sort()
front_time = 0
total_time = 0
for x in time:
    total_time += x+front_time
    front_time += x

print(total_time)
