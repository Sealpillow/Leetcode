def main():
    h =[]
    count = 0
    n = int(input())
    for i in range(n):
        h.append(input())
    for x in range(n-1):
        if h[x] == h[x+1]:
            count += 1
    print(count)


if __name__=="__main__":
    main()
