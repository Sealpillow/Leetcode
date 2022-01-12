from math import*
'''
Find the smallest serving you can get from the ratio of the 3 juices
As that is the max limit.
e.g
9 9 9
3 2 1
orange = 9/3 = 3 servings
apple = 9/2 = 4.5 servings
pineapple = 9/1 = 9 servings

Hence the max serving is 3 with the current ratio. Anything outside are the leftovers
'''
a,b,c=map(int,input().split())
i,j,k=map(int,input().split())
multiple=min(a/i,b/j,c/k)
print(a-i*multiple,b-j*multiple,c-k*multiple)
