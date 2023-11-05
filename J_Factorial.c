#include <stdio.h>

long long int fun(int x)
{
    if (x == 0)
        return 1;
    return x * fun(x - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int res = fun(n);
    printf("%lld\n", res);
    return 0;
}