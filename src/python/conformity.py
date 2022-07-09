combidict = {}
num = int(input())
for i in range(num):
    keystr = ""
    key = sorted(list(map(int, input().split())))
    for x in range(len(key)):
        keystr += str(key[x]) + " "
    if keystr not in combidict:
        combidict[keystr] = 1
    else:
        combidict[keystr] += 1

# number of student in the most popular combination (max)
biggest = max(combidict.values())
# within the whole combinationlist,
# count the number of combination that has the same number of student as the most popular combination
# max student in a combi * numcombimax
biggest *= list(combidict.values()).count(biggest)
print(biggest)

