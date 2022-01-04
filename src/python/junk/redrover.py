from math import*
"""
WNEENWEENEENE <user input

macro     final
E       WNMMNWMMNMMNM
16
NE      WMENWEEMEM
13
EEN     WNMWMME
10
NEEN    WMWEEME
10

10  <-print the least number of char used

"""
m = 1  # 1 occurrence
final = ""
macro = ""
user = input()
n = ceil(len(user)/2)
min_char =100
for i in range(1,n):  # increase range [1:2]
    m=0
    for j in range(n):
        # using slicing method
        count = user.count(user[j:j+i])  # to count number of occurrence of user[j:j+1] in user
        if count > m:  # finding max occurrence
            macro = user[j:j+i]
            m = count  # replace max occurrence
            final = user.replace(str(macro), "M")  # replace the 3 letter(macro) into M
    if m > 1:  # if max occurrence is more than 1, there is a macro in use
        num = len(final) + 3
        print(macro+" "+final)
        print(num)
        if num<min_char:
            min_char = num
print(min_char)
