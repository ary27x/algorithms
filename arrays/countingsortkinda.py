arr = [4,1,0,0,2,1,2,0,1,0,0,2,0,1,1,2,0,3,3,2,0,1,4,4,3]

print(arr)

valset = {}

for num in arr:
	if (num not in valset.keys()):
		valset[num] = 1
	else:
		valset[num] = valset[num] + 1

print(valset)
counter = 0
for k in valset.keys():
	for _ in range (valset[k]):
		arr[counter] = k
		counter = counter + 1

print(arr)