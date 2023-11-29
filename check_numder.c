#include<stdio.h>
#include<stdlib.h>

const char* even_or_odd(int number)
{
	if (number % 2 == 0)
		return ("Even");
	else
		return ("Odd");
}

int main() {
    int number = 7;

    printf("%d is %s\n", number, even_or_odd(number));
    return (0);
}