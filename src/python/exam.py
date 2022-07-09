correct = int(input())
user = input()
friend = input()
count = 0
num = len(user)
for i in range(num):
    if user[i]== friend[i]:
        count+=1

print(min(count,correct) + min(num-count,num-correct))

