#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char s[101] = "localization";
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);

        if (strlen(s) <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n", s[0], (int)strlen(s) - 2, s[strlen(s) - 1]);
        }
    }

    return 0;
}