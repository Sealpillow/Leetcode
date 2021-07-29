def main():
    num_card,predic,step= map(int,input().split())
    for i in range(step):
        s = []
        s = list(map(int,input().split()))
        s.pop(0)
        if predic in s:
            print("KEEP")
        else:
            print("REMOVE")


if __name__=="__main__":
    main()
