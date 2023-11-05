#include <stdio.h>

int main()
{
    int n, i, max;
    scanf("%d", &n);
    int numbers[n - 1];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("%d\n", max);

    return 0;
}