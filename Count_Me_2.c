#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    int vowel = 0;
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
    }

    printf("%d\n", (int)strlen(s) - vowel);

    return 0;
}