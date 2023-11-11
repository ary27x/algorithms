import sys
import colorama
import os


os.system("cls")
def canPut(value , x , y):

	startX = (x // 3) * 3
	startY = (y // 3) * 3
	
	for i in range (0 , 9):		
		if (matrix[x][i] == value or matrix[i][y] == value):
			return False
	for i in range (startX , startX + 3):
		for j in range (startY , startY + 3):
			if (matrix[i][j] == value):
				return False
	
	return True



matrix  = [
[0, 0, 0, 2, 6, 0, 7, 0, 1],
[6, 8, 0, 0, 7, 0, 0, 9, 0],
[1, 9, 0, 0, 0, 4, 5, 0, 0],
[8, 2, 0, 1, 0, 0, 0, 4, 0],
[0, 0, 4, 6, 0, 2, 9, 0, 0],
[0, 5, 0, 0, 0, 3, 0, 2, 8], 
[0, 0, 9, 3, 0, 0, 0, 7, 4],
[0, 4, 0, 0, 5, 0, 0, 3, 6],
[7, 0, 3, 0, 1, 8, 0, 0, 0]] # this is the sample sudoku, change the value of this matrix to solve some other sudoku




def printSudoku():
	global matrix
	print()
	for i in range (9):
		
		for j in range (9):
			if (matrix[i][j] == 0):
				print(colorama.Fore.RED + "0" + colorama.Style.RESET_ALL , end = " ")
			else:
				print(matrix[i][j] , end = " ")
			if ((j + 1) % 3 == 0):		
				print("| " , end = "")
		if ((i+1) % 3 == 0 ):
			print("\n-----------------------")
		else:
			print()
	


def solved():
	for i in range (0,9):
		for j in range(0,9):
			if (matrix[i][j] == 0):
					return False	
		
	return True
def solve():
	
	global matrix 
	for i in range(0 , 9):
		for j in range (0,9):
			if (matrix[i][j] == 0):
				for k in range(1,10):
					if (canPut(k , i , j)):
						matrix[i][j] = k										
						if (solved()):
							print("\n\nThis is the solved sudoku : ")
							printSudoku()
							sys.exit()
						solve()		
						matrix[i][j] = 0
				return
						

				
print("This is the starting sudoku : ")
printSudoku()


solve()







