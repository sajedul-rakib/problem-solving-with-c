#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    fgets(s, 100001, stdin);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] == ' ')
                continue;
            s[i] = s[i] - 32;
        }
        else
        {
            if (s[i] == ' ')
                continue;
            s[i] = s[i] + 32;
        }
    }

    printf("%s\n", s);

    return 0;
}