#check char based on its index
def checka(answer):
    correct=0
    for i in range(len(answer)):
        if i%3==0 and answer[i] =="A":
            correct+=1
        if i%3==1 and answer[i] == "B":
            correct+=1
        if i%3==2 and answer[i] =="C":
            correct+=1
    return correct

def checkb(answer):
    correct=0
    for i in range(len(answer)):
        if (i%4==2 or i%4==0) and answer[i] =="B":
            correct+=1
        if i%4==1 and answer[i] == "A":
            correct+=1
        if i%4==3 and answer[i] =="C":
            correct+=1
    return correct

def checkg(answer):
    correct=0
    for i in range(len(answer)):
        if (i%6==0 or i%6==1) and answer[i]=="C":
            correct+=1
        if (i%6==2 or i%6==3) and answer[i] =="A":
            correct+=1
        if (i%6==4 or i%6==5) and answer[i] =="B":
            correct+=1
    return correct


def main():
    rank=[]
    ranklist=[]
    n=int(input())
    answerinput = input()
    counta=checka(answerinput)
    countb=checkb(answerinput)
    countg=checkg(answerinput)
    rank.append(counta)
    rank.append(countb)
    rank.append(countg)
    maxscore= max(rank)
    if counta== maxscore:
        ranklist.append("Adrian")
    if countb == maxscore:
        ranklist.append("Bruno")
    if countg == maxscore:
        ranklist.append("Goran")
    print(maxscore)
    for i in range(len(ranklist)):
        print(ranklist[i])
        

if __name__=="__main__":
    main()
