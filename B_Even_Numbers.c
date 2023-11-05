#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);

    if (a == 1)
    {
        printf("%d\n", -1);
    }
    else
    {
        for (b = 1; b <= a; b++)
        {
            if (b % 2 == 0)
            {
                printf("%d\n", b);
            }
        }
    }

    return 0;
}