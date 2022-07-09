from math import *
ingredient_num,recipe_num= map(int,input().split())
ingredient= list(map(int,input().split()))
# to create and initialise 2d array through input
# recipe = []
# recipe.append(list(map(int,input().split()))) # append a list to a list, this creates a 2d array
# e.g 1 4 1 5, 3 3 3 3 -> recipe[0]=[1,4,1,5], recipe[1]=[3,3,3,3]
sales = 0
for i in range(recipe_num):
    mincount = 99999
    recipe=list(map(int,input().split()))
    # last element of each recipe,recipe[x][-1] = cost
    for x in range(ingredient_num):
        if recipe[x]==0:
            continue
        count = floor(ingredient[x]/recipe[x])
        if count<mincount:
            mincount=count
    #print(mincount*recipe[-1])
    if mincount*recipe[-1]>sales:
        sales = mincount*recipe[-1]
print(sales)
