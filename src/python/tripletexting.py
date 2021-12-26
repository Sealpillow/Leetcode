word = input()
n = int(len(word)/3)
split = [word[i:i+n] for i in range(0, len(word), n)]

dupe=[]
for i in range(3):
    if split[i] not in dupe:
        dupe.append(split[i])
    else:
        print(split[i])
        break
