def main():
    user= input()
    cards=[]
    check_repeat= False
    p=k=h=t=13
    #split user input into 3 char
    for i in range(0,int(len(user)),3):
        cards.append(user[i:i+3])
    for i in range(len(cards)):
        repeat=0
        alpha=cards[i][0]
        if alpha == "P":
            p-=1
        elif alpha == "K":
            k-=1
        elif alpha == "H":
            h-=1
        else:
            t-=1
        for x in range(len(cards)):
            if cards[i] == cards[x]:
                repeat+=1
            if repeat == 2:
                check_repeat= True
        if check_repeat==True:
            print("GRESKA")
            break
    if  check_repeat== False:
        print(p,k,h,t)
if __name__ == "__main__":
    main()
