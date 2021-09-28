def main():
    times= int(input())
    num_list=[]
    missing_list=[]
    count=0
    #put all input into a list
    for i in range(times):
        num_list.append(int(input()))
    print(num_list)

    #get all the missing digits in front on the first element
    diff1= num_list[0]-1
    for a in range(diff1):
        if diff1>0:
            for b in range(1,diff1+1):
                missing_list.append(b)
    
    #get all the missing digits in between the digits after the first element
    for x in range(len(num_list)-1):
        diff2=num_list[x+1]-num_list[x]
        print(num_list[x+1],num_list[x])
        if diff2>1:
            print(diff2)
            for n in range(1,diff2):
                missing_list.append(num_list[x]+n)
    print(missing_list)
    if len(missing_list)==0:
        print("good job")

if __name__=="__main__":
    main()
