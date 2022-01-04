from math import*
"""
WNEENWEENEENE <-user input

macro     final
E         WNMMNWMMNMMNM
14
NE        WMENWEEMEM
12
EEN       WNMWMME
10
NEEN      WMWEEME
11

10  <-print the least number of char used

"""
m = 1  # 1 occurrence
final = ""
macro = ""
user = input()
min_char = len(user)  # set max length of char to min_char
n = ceil(min_char/2)
for i in range(1, n+1):  # in case where input: E, range(1,1+1) it can go into loop
    # i is to increase range [1:2]... [1:9]->increase array length to check for repeats in user
    m = 0  # reset max occurrence of a string length
    for j in range(n):  # j-change position [0:1]..[1:2]..[5:8] is to move to every position in string
        # using slicing method
        count = user.count(user[j:j+i])  # to count number of occurrence of user[j:j+1] in user
        if count > m:  # finding max occurrence
            macro = user[j:j+i]  # set the string of word into macro
            m = count  # replace max occurrence
            final = user.replace(str(macro), "M")  # replace the 3 letter(macro) into M
    if m > 1:  # if max occurrence of a string length is more than 1, there is a macro in use
        num = len(final) + len(macro)
    else:
        num = len(user)
    if num < min_char:
        min_char = num
print(min_char)
