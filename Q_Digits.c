#include <stdio.h>

int main()
{
    int test_case, i, n;
    scanf("%d", &test_case);
    for (i = 0; i < test_case; i++)
    {
        scanf("%d", &n);
        while (1)
        {
            printf("%d ", n % 10);
            n = n / 10;
            if (n == 0)
            {
                printf("\n");
                break;
            }
                }
    }

    return 0;
}