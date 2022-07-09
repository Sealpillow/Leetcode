def check(x,y,board):
    coordx=[1,2,2,1,-1,-2,-2,-1]
    coordy=[2,1,-1,-2,-2,-1,1,2]
    for w in range(8):
        posx = x + coordx[w]
        posy = y + coordy[w]
        if ((posx > 0 and posx <= 4) and (posy > 0 and posy <= 4)) and board[posx][posy] == "k":
            return False
    return True

def iteration(chess):
    count = 0
    status = True
    for x in range(5):
        for y in range(5):
            if chess[x][y] == "k":
                count+=1
                if not check(x, y, chess):
                    # print(x,y)
                    status = False
    return status,count

board = []
for i in range(5):
    board.append([str(j) for j in list(input())])
# print(board)
status,count = iteration(board)
if status and count == 9:
    print("valid")
else:
    print("invalid")

