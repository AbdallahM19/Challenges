def check_even_odd(i):
	return "Even" if i % 2 == 0 else "Odd"

def checker_even_odd(i):
	if i % 2 == 0:
		return "Even"
	else:
		return "Odd"

number = 7
num = 8
print(f"{number} is {check_even_odd(number)}, but {num} is {check_even_odd(num)}")
print(f"{number} is {checker_even_odd(number)}, but {num} is {check_even_odd(num)}")