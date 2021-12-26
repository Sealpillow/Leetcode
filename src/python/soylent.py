from math import ceil
def main():

    n= int(input())
    for i in range(n):
        needs=int(input())
        bottle= ceil(needs/400) #nearest to next int, e.g 7.1-> 8
        print(bottle)

if __name__=="__main__":
    main()
