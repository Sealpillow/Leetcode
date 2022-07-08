count = 0
arr = []
n = int(input())
s = list(map(int,input().split())) # input into array
s.sort()
# add dummy at front and back
s.insert(0,s[0]) # a copy of first element
#print(s)
s.append(s[-1]+2) # append a end element to stop
#print(s)
for i in range(1,n+2):
    arr.append(s[i])
    count+=1
    if (s[i] - s[i-1]) > 1: # current - prev
        if count-1 > 2: # >3 consecutive
            print(str(arr[0]) + "-" + str(arr[-2]),end=" ") # exclude current
        else: # 1 or 2 consecutive
            for x in range(len(arr)-1): # exclude current
                print(str(arr[x]),end=" ")
        arr.clear()
        arr.append(s[i]) # add back current that has diff of >1
        count = 1
