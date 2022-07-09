num = int(input())
board = []
correct = True
for i in range(num):
    board.append(input())

for i in range(num):
    # check if every row black square = white square
    rbuffer = list(board[i])   # ['W', 'B', 'B', 'W']
    wcount = rbuffer.count('W')
    bcount = rbuffer.count('B')
    if wcount!=bcount:
        correct = False
    # check if every column black square = white square
    cbuffer = []
    for j in range(num):  # row
        cbuffer.append(board[j][i])
    wcount = cbuffer.count('W')
    bcount = cbuffer.count('B')
    if wcount != bcount:
        correct = False
    # No row has 3 or more consecutive squares of the same color.
    if "WWW" in board[i] or "BBB" in board[i]:   # "WWWB"
        correct = False
    bufferstr = "".join(cbuffer)
    # No column has 3 or more consecutive squares of the same color.
    if "WWW" in bufferstr or "BBB" in bufferstr:   # "WWWB"
        correct = False

if correct:
    print(1)
else:
    print(0)
    
