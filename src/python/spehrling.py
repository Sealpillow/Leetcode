given = input()
expected = input()
len1 = len(given)
len2 = len(expected)

for i in range(1,len1+len2):
    # print(s1[:i],s2[:i])
    if given[:i] != expected[:i]:
        print(len1+len2-2*(i-1))  # formula
        break
else:
    print(0)

