from math import*

n=int(input())
for i in range(n):
    v,deg,x1,h1,h2=map(float,input().split())  
    #You should use radians when you are looking at objects moving in circular paths or parts of circular path
    t = x1/v/cos(radians(deg)) # as x1 is the distance between cannon to wall, use it to find the time travel to reach there
    y=v*t*sin(radians(deg))-(1/2*9.81*pow(t,2))
    if(y>h1+1 and y<h2-1):
        print("Safe")
    else:
        print("Not Safe")
