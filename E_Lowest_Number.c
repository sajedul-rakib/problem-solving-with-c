#include <stdio.h>

int main()
{
    int n, i, index, lowestNumber = __INT_MAX__;
    scanf("%d", &n);
    int number[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);

        if (lowestNumber > number[i])
        {
            lowestNumber = number[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (number[i] == lowestNumber)
        {
            index = i + 1;
            break;
        }
    }

    printf("%d %d\n", lowestNumber, index);

    return 0;
}