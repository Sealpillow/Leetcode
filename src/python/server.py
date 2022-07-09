count = 0
num, t = map(int,input().split())
tlist = list(map(int, input().split()))
for index, item in enumerate(tlist):
    t -= item
    if t < 0:
        count = index
        break
    count = index + 1
print(count)
