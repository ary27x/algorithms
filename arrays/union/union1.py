listOfArrays = [
[1,2,4,7,9],
[10,17,19],
[2,3,5,6,9]
] # whose union we have to find

unionArray = []

for arr in listOfArrays:
	for data in arr:
		if (data not in unionArray):
			unionArray.append(data)

print(unionArray)

