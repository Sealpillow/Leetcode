def main():
    n= int(input())
    for i in range(n):
        user_input=""
        r,c= map(int,input().split())
        for x in range(r):
            user_input+=input() #combine all the special character 
        user_input=user_input[::-1] # reverse the string
        print("Test "+ str(i+1))
        for i in range(0,c*r,c):  #print based on column
            print(user_input[i:c+i])


if __name__=="__main__":
    main()
