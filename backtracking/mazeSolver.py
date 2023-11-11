import random
import colorama
import os
os.system("cls")
def printMaze(maze):
	for row in maze:
		print(row)
	print("\nStart : " , 0 , 0)
	print("End   : " , len(row) - 1 , len(row) - 1)



def setMaze(lim , density):
	global maze
	for i in range(lim):
		buffer = []
		for j in range(lim):
			if random.random() < density:
				buffer.append(1)
			else:
				buffer.append(0)
		maze.append(buffer)
			
maze = []
size = int(input("Enter the size of the maze : "))
density = float(input("Enter the density : (between 0 and 1) : "))

setMaze(size , density)
maze[0][0] = 1
maze[size-1][size-1] = 1
printMaze(maze)


def printSolution(buffer):
		global maze
		global size
		for i in range(size):
			for j in range(size):
				if ([i,j] in buffer or (i == 0 and j == 0) ):
					print(colorama.Fore.GREEN + str(maze[i][j]) + colorama.Style.RESET_ALL , end = " ")
				else:
					print(maze[i][j] , end = " ")
			print()
		print("`````````````````````````````````````````````````")
buffer = []

#printSolution(buffer)

def solve(x , y):
	global buffer
	if (x == len(maze)-1 and y == len(maze)-1):
		print(buffer , "\n")
		printSolution(buffer)
	if ((x+1) < len(maze) and maze[x+1][y] == 1):
		buffer.append([x+1,y])
		solve(x+1 , y)
		buffer.pop()		
	if ((y + 1 < len(maze)) and maze[x][y+1] == 1):
		buffer.append([x,y+1])
		solve(x , y+1)
		buffer.pop()
	return
solve(0,0)
