#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];
    scanf("%s %s", a, b);

    char c[strlen(a) + strlen(b) + 1];

    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = a[i];
    }

    int lenth = strlen(a);
    for (int i = 0; i < strlen(b); i++)
    {
        c[lenth] = b[i];
        lenth++;
    }
    c[strlen(a) + strlen(b)] = '\0';

    printf("%d %d\n", (int)strlen(a), (int)strlen(b));
    printf("%s\n", c);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}