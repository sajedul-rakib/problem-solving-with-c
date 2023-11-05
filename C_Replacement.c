#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int number[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);

        if (number[i] == 0)
        {
            number[i] = 0;
        }
        else if (number[i] > 0)
        {
            number[i] = 1;
        }
        else
        {
            number[i] = 2;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}