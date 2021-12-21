alice = 0
bob = 0
n = int(input())
num = list(map(int,input().split()))
num.sort(reverse=True)
for x in range(n):
    if x % 2 == 0:
        alice += num[x]
    else:
        bob += num[x]
print(alice,bob)
