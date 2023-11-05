#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if (x == 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", (int)x + 1);
    }

    return 0;
}