from math import*
"""
EEEEEEEEE
macro     final
E        MMMMMMMMM
12
EE       MMMME
8
EEE      MMM
6
EEEE     MME
6

"""
m = 1  # 1 occurrence
final = ""
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
            min_char= num
    else:  # no macro used
        print(macro+ " ")
        print(len(user))
print(min_char)
