N = int(input())
rope = []
for x in range(N):
    rope.append(int(input()))
rope.sort(reverse=True)
max_weight = 0
sum = 0
for i in range(len(rope)):
    if max_weight < rope[i]*(i+1):
        max_weight = rope[i]*(i+1)
print(max_weight)
