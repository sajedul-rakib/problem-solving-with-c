#include <stdio.h>

void printValue(int x)
{
    if (x == 0)
        return;
    printValue(x - 1);
    printf("%d\n", x);
}

int main()
{
    int n;
    scanf("%d", &n);
    printValue(n);
    return 0;
}