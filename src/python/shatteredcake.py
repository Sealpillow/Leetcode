a=0
w=int(input())
n=int(input())
for i in range(n):
    wi,li=map(int,input().split())
    a += wi*li
print(int(a/w))
