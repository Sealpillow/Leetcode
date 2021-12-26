n=int(input())
for i in range(n):
    s1 = input()
    s2 = input()
    length = len(s1)
    print(s1)
    print(s2)
    for x in range(length):
        if s1[x] == s2[x]:
            print(".",end="")
        else:
            print("*",end="")
    print("\n")
