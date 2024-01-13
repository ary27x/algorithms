arr = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]

i = 0 
steps = 0
while (i < len(arr) - 1):
	value = arr[i]
	j = 1
	max = 0
	maxPos = 0 
	while (i + j < len(arr) and j <= value):
		if (arr[i+j] > max):
			max = arr[i+j]
			maxPos = i + j
		j = j + 1
	i = maxPos
	steps = steps + 1

print(steps)