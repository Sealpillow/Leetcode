num = int(input())
# c - chains of ice, D - death grip, O - obliterate
count = 0
for i in range(num):
    seq = input()
    if "CD" not in seq:
        count+=1
print(count)
