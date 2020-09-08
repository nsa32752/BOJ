T = int(input())
rep = T
five_min = T // 300
min_button = T
res = [0,0,0]
for x in range(five_min, -1, -1):
    num = x
    if x > 0:
        T -= x*300
    one_min = T // 60
    for y in range(one_min, -1, -1):
        num += y
        if y > 0:
            T -= y*60
        ten_sec = T // 10
        for l in range(ten_sec, -1, -1):
            num += l
            T -= l*10
            if T == 0:
                if min_button > num:
                    min_button = num
                    res = [x, y, l]
    T = rep
if res == [0,0,0]:
    print(-1)
else:
    print(res[0], res[1], res[2])
