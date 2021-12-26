def main():
    repeat = int(input())
    num_list = list(map(int,input().split()))
    min_num= min(num_list)
    index = num_list.index(min_num)
    print(index)

if __name__ == "__main__":
    main()
