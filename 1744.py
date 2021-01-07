N = int(input())
n=[]
positive=[]
negative=[]
for _ in range(N):
    x = int(input())
    if x>0:
        positive.append(x)
    else:
        negative.append(x)

positive.sort(reverse=1)
negative.sort()
sum=0
idx=0
while idx<len(positive):
    if idx < len(positive)-1:
        if positive[idx] != 1 and positive[idx+1] != 1:
            sum += positive[idx]*positive[idx+1]
            idx+=2
        else:
            sum += positive[idx]
            idx+=1
    else:
        sum += positive[idx]
        idx+=1
idx=0
while idx<len(negative):
    if idx<len(negative)-1:
        sum += negative[idx]*negative[idx+1]
        idx+=2
    else:
        sum += negative[idx]
        idx+=1

print(sum)
