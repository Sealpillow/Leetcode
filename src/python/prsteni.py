from math import gcd
num = int(input())
arr = list(map(int,input().split()))


for i in range(1,num):
    common = gcd(arr[0],arr[i])  # greatest common divisor
    num1 = str(int(arr[0]/common))
    num2 = str(int(arr[i]/common))
    print(num1+'/'+num2)
    
