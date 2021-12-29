list1=[]
list2=[]
sort1=[]

'''

list1   list2
10      55
67      73
68      10
28      6

list1 is copied to sort1, so that list1 position stays while, 
the same content is sorted for matching when list is sorted,
numbers are matched, index will be the same
sort1   list2
10      6  
28      10
67      55
68      73

so when we go through the list1
find the element in sort1 that match list1
when list1[0]= 10, it will get the index of 10 in sort1 
which will be the same index in list2 as it has been sorted, then print the value 6, continues....
10 -> 6    
67 -> 55 
68 -> 73 
28 -> 10

after done clear the content of the list so that it can be used again
'''
while True:
    n=int(input())
    if n == 0:
        break;
    else:
        for i in range(n):
            list1.append(int(input()))
        for i in range(n):
            list2.append(int((input())))
        sort1= list1.copy()
        #sort the 2 list
        sort1.sort()
        list2.sort()
        for i in range(n):
            for j in range(n):
                if list1[i] == sort1[j]:
                    print(str(list2[j]))
        print('')
    # clear all the list for the next 2 input list
    list1.clear()
    list2.clear()
    sort1.clear()
