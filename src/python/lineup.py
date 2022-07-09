num = int(input())
before = input()
increasing = False
decreasing = False
neither = False

for x in range(num-1):
    name = input()
    for i in range(min(len(name), len(before))):  # checking current vs before if is increasing/ decreasing
        # check base on the first letter to the last, if both first letter are the same, check the next letter
        # once there is a difference break loop from continue checking
        # print(name[i],before[i])
        if name[i] > before[i] and not neither: # and not neither is so that to prevent any changes
            increasing = True
            break
        if name[i] < before[i] and not neither:
            decreasing = True
            break
    if increasing and decreasing: # if increasing and decreasing both exist = neither
        neither = True
        increasing = False
        decreasing = False
    before = name
if increasing and not decreasing:
    print("INCREASING")
if decreasing and not increasing:
    print("DECREASING")
if not increasing and not decreasing:
    print("NEITHER")
    
