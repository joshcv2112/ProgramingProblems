# Fizz Buzz
# Cycle through 1 and 100, for multiples of 3 print "Fizz"
# for multiples of 5 print "Buzz", and for multiples of 3 and 5 print "FizzBuzz"

def fizz_buzz():
	for x in range(1, 101):
		if (x % 3 == 0 and x % 5 != 0):
			print("Fizz")
		elif (x % 5 == 0 and x % 3 != 0):
			print("Buzz")
		elif (x % 3 == 0 and x % 5 == 0):
			print("FizzBuzz")
		else:
			print(x)


fizz_buzz()