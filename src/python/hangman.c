count=0
word=input()
alpha=input()
for x in alpha:
    if x in word:
        word = word.replace(x,"")
        print(word)
    else:
        count+=1
    if count == 10:
        print("LOSE")
        break
    if len(word) == 0:
        print("WIN")
        bre
