num, time =map(int,input().split())
a,b,c,t0 = map(int,input().split())
arr=[]
total = 0
count = 0
penalty = 0
arr.append(t0)
for i in range(1,num):
    arr.append(((a*arr[-1]+b)%c)+1) # arr[-1]= prev added(ti-1)
arr.sort()
for i in range(num):
    if total + arr[i]> time:
        break;
    total += arr[i]
    penalty= (penalty+total)%1000000007;
    count+=1
print(count,penalty)
