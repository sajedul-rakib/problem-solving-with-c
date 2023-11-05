#include <stdio.h>

int main()
{
    int n, s, k;

    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (int i = 1; i <= n * 2 - 1; i++)
    {

        // print space
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        // print # and -;
        if (i % 2 == 1)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= k; j++)
            {
                printf("-");
            }
        }

        if (i < n)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
}