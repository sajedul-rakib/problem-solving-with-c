#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int numbers[n - 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }

    sum > 0 ? printf("%d\n", sum) : printf("%d\n", sum * -1);

    return 0;
}