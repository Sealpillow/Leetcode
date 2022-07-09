s = input()
p = input()

accepted = False
if s == p:
    accepted = True
if s == p.swapcase():
    accepted = True
for i in range(10):
    if s == p + str(i):
        accepted = True
        break
    if s == str(i) + p:
        accepted = True
        break
if accepted:
    print("Yes")
else:
    print("No")
    
