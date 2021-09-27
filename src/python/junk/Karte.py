def main():
    user= input()
    cards=[]
    p=k=h=t=12
    #split user input into 3 char
    for i in range(0,int(len(user)),3):
        cards.append(user[i:i+3])
        print(user[i:i+2])
    print(cards)
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
        print(p,k,h,t)
        for x in range(int(len(user)/3)):
            if cards[i] == cards[x]:
                repeat+=1
                print(cards[i])
                print(repeat)
            if repeat == 2:
                print("GRESKA")
                break


    print(p,k,h,t)
if __name__ == "__main__":
    main()
