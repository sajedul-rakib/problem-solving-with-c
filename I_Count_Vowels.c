#include <stdio.h>

int count_vowel(char t[], int index)
{
    if (t[index] == '\0')
        return 0;
    int ans = count_vowel(t, index + 1);
    if (t[index] >= 'A' && t[index] <= 'Z')
    {
        t[index] += 32;
    }
    if (t[index] == 'a' || t[index] == 'e' || t[index] == 'i' || t[index] == 'o' || t[index] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int c = count_vowel(s, 0);
    printf("%d\n", c);
    return 0;
}