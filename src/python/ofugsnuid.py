numlist=[]
n = int(input())
for i in range(n):
    numlist.append(int(input()))
numlist.reverse()
for x in range(n):
    print(numlist[x])
