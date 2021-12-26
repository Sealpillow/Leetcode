def main():
    times= int(input())
    for i in range(times):
        group = list(map(int,input().split()))
        group.pop(0)
        group.pop(len(group)-1)
        for x in range(len(group)-1):
            if group[x+1]-group[x]!=1:
                print(x+2)
                break

if __name__=="__main__":
    main()
