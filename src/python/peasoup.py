found = False
arr=[]
num = int(input())
for i in range(num):
    dishnum = int(input())
    restaurant = input()
    condition1=False
    condition2=False
    for x in range(dishnum):
        dish = input()
        if dish=="pea soup":
            condition1 = True
        if dish=="pancakes":
            condition2 = True
    if condition1 and condition2:
        found = True
        arr.append(restaurant)
if found:
        print(arr[0])
else:
    print("Anywhere is fine I guess")
    
