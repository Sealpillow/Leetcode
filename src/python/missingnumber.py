n = int(input())
arr = input()
num =[]
count = 1
while arr:
    # print(num,arr)
    # print(count)
    # for the case if n=10 123456781011 ->[1, 2, 3, 4, 5, 6, 7, 8, 1, 1, 1, 1]
    # since when 9 is expected but 1 is appended
    # at the checking part it will still fufill condition expecting 9 but is a 1  
    if count<10:
        num.append(int(arr[:1]))
        arr=arr[1:] # slice to the next
    elif count>=10 and count<100:
        num.append(int(arr[:2]))
        arr = arr[2:]
    else:
        num.append(int(arr[:3]))
        arr = arr[3:]
    count+=1

# for the case if last num is gone e.g n=5 input=1,2,3,4
# the array will contain 1,2,3,4,4 since the last element of the array is not 5 hence 5 is missing
num.append(num[-1]) # append a copy of the last num,
# print(num)
for i in range(n):
    # print(num[i],i+1)
    if num[i]!= i+1:
        print(i+1)
        break

