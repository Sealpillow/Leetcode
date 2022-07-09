total = 0
i=0
num = int(input())
arr = sorted(list(map(int,input().split())))
while(i<num): # while loop is used as it can increment the i in the loop whereas for loop cant
    total+=arr[i]
    # run thru consecutive number 
    # e.g 2,3,4,7 -> 2,3= true 3,4= true 4,7= false hence out of loop and start from 7
    # i<num-1 to prevent out of range
    # arr[i+1]-arr[i](difference) = 1
    while i<num-1 and arr[i+1]-arr[i]==1:
        i+=1
    i+=1
print(total)
