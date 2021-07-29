def tier(c):
    if c =="A":
        return 0
    elif c =="T":
        return 9
    elif c =="J":
        return 10
    elif c =="Q":
        return 11
    elif c == "K":
        return 12
    else:
        return int(c)-1 #put c in position: int(c)-1
max = 0
rank=[0,0,0,0,0,0,0,0,0,0,0,0,0]
arr = input().split()
rank[tier(arr[0][0])]+=1
rank[tier(arr[1][0])]+=1
rank[tier(arr[2][0])]+=1
rank[tier(arr[3][0])]+=1
rank[tier(arr[4][0])]+=1
for i in range (13):
    if rank[i]>max:
        max=rank[i]
print(max)
