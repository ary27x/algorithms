def check(s):
	startValue = 0
	while (startValue + s <= len(arr)):
		tempSum = 0
		for counter in range(startValue , startValue + s):
			tempSum = tempSum + arr[counter]
		global maxSum
		if (tempSum > maxSum):
			maxSum = tempSum
		startValue = startValue + 1


arr = [-2,-3,4,-1,-2,1,5,-3]

print("this is the array : " , arr)


maxSum = arr[0] # this is an assumption

for sizeValue in range (1 , len(arr) + 1):
	check(sizeValue)

print("this is the value of max contiguous sub array sum : " , maxSum)

