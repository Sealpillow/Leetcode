blank =0
lower =0
upper =0
symbol =0

string = input()
length =len(string)
for char in string:
    if char == "_":
        blank+=1
    elif char.islower():
        lower+=1
    elif char.isupper():
        upper+=1
    else:
        symbol+=1
print(round(blank/length,16))
print(round(lower/length,16))
print(round(upper/length,16))
print(round(symbol/length,16))
