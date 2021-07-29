total = 0
n=input()
arr = list(map(int,input().split()))
for i in range(len(arr)):
    if arr[i]<0:
        total+= abs(arr[i])
print(total)
