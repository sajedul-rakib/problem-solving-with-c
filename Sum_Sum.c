#include <stdio.h>

int main()
{
    int n, i, d;
    long long int sumOfPositive = 0, sumOfNegative = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &d);

        if (d > 0)
        {
            sumOfPositive += d;
        }
        else
        {
            sumOfNegative += d;
        }
    }

    printf("%lld %lld\n", sumOfPositive, sumOfNegative);
    return 0;
}