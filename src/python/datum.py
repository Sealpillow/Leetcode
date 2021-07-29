s=input()
day=int(s.split(" ")[0])
month=s.split(" ")[1]
word=["Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"]
month_days={
"1":0,
"2":31,
"3":59,
"4":90,
"5":120,
"6":151,
"7":181,
"8":212,
"9":243,
"10":273,
"11":304,
"12":334
}
total_days=day+ month_days[month]
r=total_days%7
print(word[r])
