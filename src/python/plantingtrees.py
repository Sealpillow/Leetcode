highest=0
count = 0
n = int(input())
num = list(map(int,input().split()))
num.sort(reverse=True)
for x in range(n):
    count+=1
    if num[x]+count >highest:
        highest = num[x]+count
print(highest+1);
