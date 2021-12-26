def main():
    n= int(input())
    num_list= list(map(int,input().split()))
    count=1
    for i in range(len(num_list)-1):
        
        if num_list[i]<num_list[i+1]:
            count+=1
    print(count)
if __name__=="__main__":
    main()
