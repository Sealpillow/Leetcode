num=[]
a,b,c,d=map(int,input().split())
num.append(a)
num.append(b)
num.append(c)
num.append(d)
num.sort()
area = num[0]*num[2]
print(area)
