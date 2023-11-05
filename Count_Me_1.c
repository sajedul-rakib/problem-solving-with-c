#include <stdio.h>

int main()
{
    int n, i, count2 = 0, count3 = 0;
    scanf("%d", &n);
    int num;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0 && num % 3 == 0)
        {
            count2++;
        }
        else if (num % 2 == 0)
        {
            count2++;
        }
        else if (num % 3 == 0)
        {
            count3++;
        }
    }

    printf("%d %d\n", count2, count3);

    return 0;
}