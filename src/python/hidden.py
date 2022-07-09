password,string = map(str,input().split())
goal = len(password)
count = 1
prev = string.find(password[0]) # find the first location of the first char of the password in string
string= string[:prev]+"."+ string[prev+1:]
for i in range(1,len(password)):
    if prev == -1:  # if letter is not in the string 
        break
    cur = string.find(password[i])
    if prev>cur:  # by index, check if the index of the previous > current
        break
    # replace the letter with non alphabet to check for repeated occurrence for same letter
    string= string[:cur]+"."+string[cur+1:]
    count += 1
    prev = cur
if count==goal:
    print("PASS")
else:
    print("FAIL")
    
