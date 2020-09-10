import operator
N = int(input())
sum = 0
charset = []
for x in range(N):
    charset += [input()]
charset.sort(key=lambda x:len(x), reverse=True)
num = [[],[],[],[],[],[],[],[],[]]
num_dic = {}
for i in charset:
    for j in range(len(i),0,-1):
        ten = 10 ** (j - 1)
        if(j!=1 and i[len(i)-j] in num_dic.keys()):
            num_dic[i[len(i)-j]] += ten
        elif(j!=1):
            num_dic[i[len(i)-j]] = ten
        elif (j==1 and i[len(i)-j] in num_dic.keys()):
            num_dic[i[len(i)-j]] += ten
        else:
            num_dic[i[len(i)-j]] = ten
num_dic = dict(sorted(num_dic.items(), key=operator.itemgetter(1), reverse=True))
nine = 9
for a in num_dic.keys():
    num_dic[a] = nine
    nine -= 1
for n in charset:
    tmp = ''
    for m in n:
        tmp += str(num_dic[m])
    sum += int(tmp)
print(sum)
