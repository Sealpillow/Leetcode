case = int(input())
for i in range(case):
    a,b,c=map(int,input().split())
    if a+b == c:
        print("Possible")  
    elif abs(a-b) == c:
        print("Possible")
    elif a*b == c:
        print("Possible")
    elif a/b == c:
        print("Possible")
    elif b/a == c:
        print("Possible")
    else:
        print("Impossible")
