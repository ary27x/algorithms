def printArray (s):
	for i in range(0 , len(arr)):
		if (i + s > len(arr)):
			break
		for j in range(i , i + s):
			print(arr[j] , end = " ")
		print()



arr = [1,2,3,4,5] # consider this to be our array

print("This is the original array : ")
print(arr)


for s in range (1 , len(arr) + 1):
	printArray(s)


