#include <stdio.h>

int main()
{

    int n = 5;
    int *p = &n;
    int *q = &p;
    *q = 3;
    printf("%d %d\n", n, *p);
    return 0;
}