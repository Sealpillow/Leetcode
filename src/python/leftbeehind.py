def main():
    while(1):
        sw,so=map(int,input().split())
        if sw==0 and so ==0:
            break
        if sw+so==13:
            print("Never speak again.")
            continue
        if sw>so:
            print("To the convention.")
        elif so>sw:
            print("Left beehind.")
        else: 
            print("Undecided.")


if __name__=="__main__":
    main()
