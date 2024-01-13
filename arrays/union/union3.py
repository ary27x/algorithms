arr1 = [1,2,4,5,8]
arr2 = [0,1,3,5,7,9]

unionArray = []

limit = min(len(arr1) , len(arr2))

i = 0
j = 0

while (i < len(arr1) and j < len(arr2)):
	if (arr1[i] < arr2[j]):
		if (len(unionArray) == 0 or arr1[i] > unionArray[len(unionArray) -1]): 
			unionArray.append(arr1[i])
		i = i + 1
	else:
		if (len(unionArray) == 0 or arr2[j] > unionArray[len(unionArray) -1]): 
			unionArray.append(arr2[j])
		
		j = j + 1
	  

while (i < len(arr1)):
	if (len(unionArray) == 0 or arr1[i] > unionArray[len(unionArray) -1]): 
			unionArray.append(arr1[i])
	i = i + 1

while (j < len(arr2)):
	if (len(unionArray) == 0 or arr2[j] > unionArray[len(unionArray) -1]): 
			unionArray.append(arr2[j])
		
	j = j + 1



print(unionArray)

