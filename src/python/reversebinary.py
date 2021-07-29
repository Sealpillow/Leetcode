n = int(input())
b= bin(n).replace("0b"," ") #after convert to bin output: 0bxxxx use .replace("0b"," ") to remove it
rv= b[::-1]#or str(b)[::-1] #reverse binary num, using string/int slicing
print(int(rv,2)) #convert binary to dec
