#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else
    {
        for (i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}