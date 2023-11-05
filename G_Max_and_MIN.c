#include <stdio.h>

int main()
{
    int n, min = __INT_MAX__, max;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (min > number[i])
        {
            min = number[i];
        }
    }

    max = min;

    for (int i = 0; i < n; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}