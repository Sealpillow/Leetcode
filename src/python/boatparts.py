parts = []
count = 0
p,n=map(int,input().split())
for i in range(n):
    s = input()
    if s not in parts:
        parts.append(s)
        count+=1
        if count == p:
            print(i+1)
if count!=p:
    print("paradox avoided")
