"""
A->B->BA->BAB->BABBA->BABBBA
Don't have to play with arrays
count the number of A's and B's
if i gt 5 counts of A->B 5 count of A = 5 count of B, find the multiple
if i gt 3 counts of B->BA  1 count of B = 3 count of A + 3 count of B,
find the multiple this enable to create an equation
num_a= multipleB;
num_b = multipleA+multipleB;

"""

num = int(input())
num_a = 1
num_b = 0
for i in range(num):
    multipleA = num_a
    multipleB = num_b
    num_a = multipleB
    num_b = multipleA + multipleB

print(str(num_a) + " " + str(num_b))
