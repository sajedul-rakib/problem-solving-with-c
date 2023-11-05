#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int i = 0;
    int j = strlen(s) - 1;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        [j] = temp;
        i++;
        j--;
    }

    return 0;
}