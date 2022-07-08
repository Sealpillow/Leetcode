count=0
num=0
socks,cap,k = map(int,input().split()) #input to diff variable
s = list(map(int,input().split())) # input into array
s.sort()

for i in range(socks):
    d = s[i]
    num+=1
    # printf("count:%d  num:%d prev:%d\n",count,num,prev);
    if(num==1):

        prev = d
    if(abs(prev-d)>k): # if socks having color diff> k
        #printf("exceed\n");
        count+=1
        prev = d
        num=1
    if(num==cap): # reach max cap
        count+=1
        num=0
if(num>0):
    count+=1
print(count)
