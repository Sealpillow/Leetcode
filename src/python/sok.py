from math import*
a,b,c=map(int,input().split())
i,j,k=map(int,input().split())
multiple=min(a/i,b/j,c/k)
print(a-i*multiple,b-j*multiple,c-k*multiple)
