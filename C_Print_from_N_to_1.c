#include <stdio.h>

void reverseValuePrint(int x)
{
    if (x == 0)
        return;
    printf("%d", x);
    if (x > 1)
        printf(" ");
    reverseValuePrint(x - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    reverseValuePrint(n);
    printf("\n");
    return 0;
}