#include <stdio.h>

int main()
{
    int n, i, min = __INT_MAX__, minIndex, max, maxIndex;
    scanf("%d", &n);
    int number[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);

        if (min > number[i])
        {
            min = number[i];
            minIndex = i;
        }
    }

    max = min;

    for (i = 0; i < n; i++)
    {
        if (max < number[i])
        {
            max = number[i];
            maxIndex = i;
        }
    }

    number[minIndex] = max;
    number[maxIndex] = min;

    for (i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}