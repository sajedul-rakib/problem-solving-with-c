#include <stdio.h>

int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    printf("%.2f\n", (x / 100.00) * 100 + p);
    return 0;
}