arr = [1,2,3,4,5] # consider this to be our array

# this is a trivial way to do this
print("This is the original array : ")
print(arr)
# consider printing a sub array of size 3 

for i in range (0 , len(arr)):
	for j in range (i + 1 , len(arr)):
		for k in range (j + 1 , len(arr)):
			print(arr[i] , arr[j] , arr[k])

# this obv has a time complex of n3 which is terrible
