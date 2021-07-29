from math import*
a,b,c,d = map(int,input().split())
s= (a+b+c+d)/2
area = float(sqrt((s-a)*(s-b)*(s-c)*(s-d))) #using Brahmagupta's Formula: https://brilliant.org/wiki/brahmaguptas-fomula/
print("%.15g" %(area))
