line = input()
inp = line.split("-")
for x in range(len(inp)):
    if '+' in inp[x]:
        sum = 0
        tmp = inp[x].split("+")
        for y in tmp:
            sum += int(y)
        inp[x] = sum
res = int(inp[0])
for i in inp[1:]:
    res -= int(i)
print(res)
