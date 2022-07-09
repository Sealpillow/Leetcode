diff = int(input()) - 2018
found = False
for i in range(1,13): #  check if is within that year-> at i=6 and diff =2 (2*12+6)%26=4->true
    if (diff*12+i)%26==4:
        found = True
    # print((diff*12+i)%26)
if found:
    print("yes")
else:
    print("no")
