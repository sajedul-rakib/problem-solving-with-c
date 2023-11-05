#include <stdio.h>
#include <string.h>

int main()
{
    int n, capital = 0, small = 0, digit = 0;
    scanf("%d", &n);
    char s[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
                }

        printf("%d %d %d\n", capital, small, digit);
        capital = 0, small = 0, digit = 0;
    }
    return 0;
}