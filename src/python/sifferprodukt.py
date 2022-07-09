x = input()

def cal(num):
    if len(num)==1:
        return num
    sum = 1
    for i in range(len(num)):
        if num[i] != "0":
            sum*=int(num[i])
    return cal(str(sum))

print(cal(x))
