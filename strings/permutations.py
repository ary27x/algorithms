def form(l ,  result): # this would need a bug fix , as this does not work properly for repeated characters ;  maybe use a hash map to keep track of the count of the element and the max ~
  # ~ count that they could have
	if (len(result) == l):
		print(result)
		return

	for c in string:	
		if (c not in result):
			result += c
			form (l , result)
			result = result[:-1]
			

		

string = "abc"
for i in range (0 , len(string)):
	form(i+1 , "")
	
