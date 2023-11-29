#include <stddef.h>
#include <stdio.h>

int sum_array(const int *values, size_t count)
{
    double sum = 0.0;

    if (values)
    {
        for (size_t i = 0; i < count; i++)
            sum += values[i];
        return (sum);
    }
    else
        return (0);
}

int main()
{
    // Test cases
    int array1[] = {1, 5, 4, 0, -1};
    int array2[] = {};
    int array3[] = {-2};

    // Test sum_array function
    printf("Input: array1, Output: %d\n", sum_array(array1, sizeof(array1) / sizeof(array1[0])));
    printf("Input: array2, Output: %d\n", sum_array(array2, sizeof(array2) / sizeof(array2[0])));
    printf("Input: array3, Output: %d\n", sum_array(array3, sizeof(array3) / sizeof(array3[0])));

    return (0);
}