count = 0
for i in range(5):
    s=input()
    if "FBI" in s:
        print(i+1)
    else:
        count+=1
if count == 5:
    print("HE GOT AWAY!")
