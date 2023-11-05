#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    scanf("%d%d%d", &a, &b, &c);
    x = a;
    y = b;
    z = c;

    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    if (b > c)
    {
        int temp = c;
        c = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d", x, y, z);

    return 0;
}