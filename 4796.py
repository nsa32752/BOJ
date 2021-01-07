num = 0
while True:
    num +=1
    L, P, V = map(int, input().split(" "))
    if L==0 and P==0 and V==0:
        break
    use=V//P*L
    if V%P<=L:
        use += V%P
    else:
        use += L
    print("Case "+str(num)+": "+str(use))
