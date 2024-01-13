listOfArrays = [
[1,2,4,7,9],
[10,17,19],
[2,3,5,6,9]
] # whose union we have to find

unionArray = []

for arr in listOfArrays:
	for data in arr:
		unionArray.append(data)

unionArray = list(set(unionArray))
print(unionArray)

