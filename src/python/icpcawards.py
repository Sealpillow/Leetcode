teams = int(input())
uni_list=[]
team_list=[]

for i in range(teams):
    s=input()
    uni = s.split(" ")[0]
    if uni not in uni_list:
        uni_list.append(uni)
        team_list.append(s)
for i in range(12):
    print(team_list[i])
