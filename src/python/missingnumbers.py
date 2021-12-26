def main():
    times= int(input())
    num_list=[]
    missing_list=[]
    count=0
    #put all input into a list
    for i in range(times):
        num_list.append(int(input()))

    #get all the missing digits in front on the first element
    diff1= num_list[0]-1
    if diff1>0:
        for b in range(1,diff1+1):
            missing_list.append(b)

    #get all the missing digits in between the digits after the first element
    for x in range(len(num_list)-1):
        diff2=num_list[x+1]-num_list[x]
        if diff2>1: #if between the 2 numbers there is a gap, the missing digits is added to the list
            for n in range(1,diff2): 
                missing_list.append(num_list[x]+n) 

    if len(missing_list)==0:
        print("good job")
    else:
        for i in range(len(missing_list)):
            print(missing_list[i])

if __name__=="__main__":
    main()
