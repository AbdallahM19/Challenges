#include<stdio.h>
#include<stdlib.h>

int makeNegative(int num)
{
	if (num > 0)
		return (num * -1);
	else
		return (num);
}

int make_Negative(int num)
{
	return (num > 0 ? (num * -1) : num);
}

int main()
{
	// Test cases
	int positiveNumber = 5;
	int negativeNumber = -8;
	int zero = 0;

	// Test makeNegative function
	printf("makeNegative:\n");
	printf("%d becomes %d\n", positiveNumber, makeNegative(positiveNumber));
	printf("%d remains %d\n", negativeNumber, makeNegative(negativeNumber));
	printf("Zero remains %d\n", makeNegative(zero));

	// Test make_Negative function
	printf("\nmake_Negative:\n");
	printf("%d becomes %d\n", positiveNumber, make_Negative(positiveNumber));
	printf("%d remains %d\n", negativeNumber, make_Negative(negativeNumber));
	printf("Zero remains %d\n", make_Negative(zero));

	return (0);
}