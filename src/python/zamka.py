
min_range = int(input())
max_range = int(input())
ideal = int(input())

num = []

for i in range(min_range,max_range+1):
    digit_sum = 0
    for digit in str(i):
        digit_sum+= int(digit)
    if digit_sum == ideal:
        num.append(i)
    
print(min(num,default=0))
print(max(num,default=0))
