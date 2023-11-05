#include <stdio.h>

int main()
{
    int freq[26] = {0};
    int n;
    char ch;
    for (; n = scanf("%c", &ch) != EOF && n != '\n';)
    {
        freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c = %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}