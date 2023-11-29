#include<stdio.h>

const char* even_or_odd(int number)
{
	if (number % 2 == 0)
		return ("Even");
	else
		return ("Odd");
}

const char* check_even_odd(int number)
{
	return ((number % 2 == 0) ? "Even" : "Odd");
}

int main() {
	int number = 7;
	printf("%d is %s\n", number, even_or_odd(number));
	printf("%d is %s\n", number, check_even_odd(number));
	number = 4;
	printf("%d is %s\n", number, even_or_odd(number));
	printf("%d is %s\n", number, check_even_odd(number));
	return (0);
}