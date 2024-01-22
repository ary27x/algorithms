# Euclids Algorithm
# finds the gcd of two numbers in log n time
def gcd(a , b):
	if (b > a):
		a , b = b , a
	while(b!=0):
		b , a = a % b, b
	return a

print(gcd(21,28))