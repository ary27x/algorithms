arr = [1,-8,5,68,2,47,-11,-7,8,-6] 

print(arr)

destinationForLeft = 0;
for index in range(0 , len(arr)):
	data = arr[index]
	if (data >= 0): # bifurcate condition for the type of element to be on the right side
		continue
	offset = index - destinationForLeft
	shift = index
	for counter in range (offset):
		temp = arr[shift-1]
		arr[shift-1] = arr[shift]
		arr[shift] = temp
		shift = shift - 1
	destinationForLeft = destinationForLeft + 1
	
print(arr)
	
		
	
