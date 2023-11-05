#include <stdio.h>

void sumation(int *x, int *y)
{
    printf("%d\n", (*x + *y));
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    sumation(&x, &y);
    return 0;
}