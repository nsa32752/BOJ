N = int(input())
rep = N
five = N//5
min = N
for x in range(five,-1,-1):
    have = 0
    if x > 0:
        N -= x*5
        have += x
        if N%3 == 0:
            have += N//3
            if min > have:
                min = have
    else:
        if N%3 == 0:
            have += N//3
            if min > have:
                min = have
    N = rep
if min == N:
    print(-1)
else:
    print(min)
