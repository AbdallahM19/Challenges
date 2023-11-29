#include <stdio.h>
#include <string.h>

void print_back_string(char *input_string)
{
	int i = strlen(input_string) - 1;
	while (i >= 0)
	{
		printf("%c", input_string[i]);
		i--;
	}
}

void back_string(char *input_string)
{
    for (int i = strlen(input_string) - 1; i >= 0; i--)
        printf("%c", input_string[i]);
}

int main()
{
	char *my_string = "Hello, World!";
	print_back_string(my_string);
	printf("\n");
	back_string(my_string);
	return 0;
}