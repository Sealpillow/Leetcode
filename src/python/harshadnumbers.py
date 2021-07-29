n = int(input())

while(1):
    sum = 0
    d = [int(a) for a in str(n)] #split num input to individual digits
    for i in d:
        sum += i
    if n%sum==0:
        break
    else:
        n+=1     
print(n)   
