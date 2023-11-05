#include <stdio.h>

int main()
{
    // declare variable
    int num_of_value, i, size_of_numbers = 0, even = 0, odd = 0, positive = 0, negative = 0;

    // taking a integer number from user for how many number will take
    scanf("%d", &num_of_value);

    // declare a number array
    int numbers[num_of_value - 1];

    // taking user input
    for (i = 0; i < num_of_value; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // check the all number from numbers array that's they are even,odd,positive,and negative
    for (i = 0; i < num_of_value; i++)
    {
        // even number count from numbers
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        // odd number count from numbers
        if (numbers[i] % 2 == 1 || numbers[i] % 2 == -1)
        {
            odd++;
        }
        // positive number count from numbers
        if (numbers[i] > 0)
        {
            positive++;
        }
        // negative number count from numbers
        if (numbers[i] < 0)
        {
            negative++;
        }
    }

    // print final result
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}