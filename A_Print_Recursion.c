#include <stdio.h>

void printLine(int x)
{
    if (x == 0)
        return;
    printf("I love Recursion\n");
    printLine(x - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printLine(n);
    return 0;
}