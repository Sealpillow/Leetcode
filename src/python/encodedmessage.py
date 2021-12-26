from math import*
#
# R S T  0 1 2  <- start
# E E O  3 4 5
# T C P  6 7 8
#
n = int(input())
for i in range(n):
    arr=input()
    length = len(arr) # find total length of string
    x = int(sqrt(length)) # x= breath/length of the 'square' as length =x^2
    start = x-1 # following sequence, the first letter to print(arr[index]), index = start= x-1
    for y in range(x): #print row
        letter = start 
        for k in range(x): #print column
            print(arr[letter],end="") 
            letter = start+(k+1)*x # next row in the same column: +(k+1)*x increase in multiple of x 2+3 2+6
        start -= 1  
    print("") #next line once finish printing each string
