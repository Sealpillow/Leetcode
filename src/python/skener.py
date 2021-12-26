def main():
    r,c,zr,zc = map(int,input().split())
    for i in range(r):
        new_row=[]
        row = input()
        for n in range(len(row)):
            for k in range(zc):
                new_row.append(row[n])    
        for x in range(zr):
            join_row=''.join(new_row)
            print(join_row)


if __name__=="__main__":
    main()
