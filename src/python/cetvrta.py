# xor = ^ if 0^0 = 0 | 0^1 = 1 | 1^0 = 1 | 1^1 = 0
#  5 ^ 7      5:0 1 0 1    | 5 ^ 7 ^ 7   5:0 1 0 1        5:0 1 0 1   prev result:0 0 0 0
#             7:0 1 1 1    |             5:0 1 0 1        5:0 1 0 1             7:0 1 1 1
#        result:0 0 1 0 = 2|             7:0 1 1 1   result:0 0 0 0  final result:0 1 1 1
#                          |        result:0 1 1 1 = 7
# 
# if  x1,y1:(30 20) x2,y2:(10 10) x3,y3:(10 20)
# only can use this if square is quardrilateral
x1,y1 = map(int,input().split())
x2,y2 = map(int,input().split())
x3,y3 = map(int,input().split())
x4 = x1^x2^x3
y4 = y1^y2^y3
print(x4,y4)
