l,r=map(int,input().split())

if l==0 and r ==0:
    print("Not a moose")
elif l==r:
    print("Even "+ str(l+r))
else:
    if r>l:
        print("Odd "+ str(r*2))
    else:
        print("Odd "+ str(l*2))
