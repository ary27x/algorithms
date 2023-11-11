# this is a horribly inefficient way to solve this problem , would work on optimizing this problem later

import os
import sys
import copy
import time
os.system("cls")
n = int(input("Enter the value of n : "))
startTime = time.time()

board = []
for i in range(n):
	buffer = []
	for j in range(n):
		buffer.append(".")
	board.append(buffer)

print("This is the starting configuration of the board : \n")
for row in board:
	print(row)

#this is the helper function to see if the place is safe to play or not
def isSafe(x,y):
	global board
	for i in range(len(board)):
		if (board[x][i] == "Q" or board[i][y] == "Q"):		
			return False
	temp = min(x,y)
	xc = x - temp
	yc = y - temp
	while (xc < len(board) and yc < len(board)):
		if (board[xc][yc] == "Q"):

			return False
		xc = xc+1
		yc = yc+1
	xc = x
	yc = y
	while (xc >= 0  and yc < len(board)):
		if (board[xc][yc] == "Q"):
			return False
		xc = xc-1
		yc = yc+1
	xc = x
	yc = y
	
	while (xc < len(board)  and yc >= 0):
		if (board[xc][yc] == "Q"):
			return False
		xc = xc+1
		yc = yc-1	


	return True
solutions = []
def saveBoard():
	global board
	global solutions

	buffer = copy.deepcopy(board)
	if (buffer not in solutions):
		solutions.append(buffer)
queenCounter = 0
def solve():
	print("\rTime Elapsed :"  , time.time() - startTime , end = "")
	global board
	global queenCounter
	for i in range(len(board)):
		for j in range(len(board)):
			if (isSafe(i,j)):			
				board[i][j] = "Q"
				queenCounter = queenCounter + 1
				
				if (queenCounter == n):
					saveBoard()		
				solve()
				board[i][j] = "."
				queenCounter = queenCounter - 1
	


solve()
print("\n")
os.system("cls")

print("This is the starting configuration of the board : \n")
for row in board:
	print(row)

number = 0
for solution in solutions:
	number = number + 1
	print("\nSolution Number : " , number )
	for row in solution:
		print(row)


endTime = time.time()

print("\n# Total time taken :" , (endTime - startTime) , "seconds")
