#include <stdio.h>
#include <string.h>

int is_palindrome(char w[])
{

    int firstAlpha = 0;
    int lastAlpha = strlen(w) - 1;

    // copy the word and store a variable
    char copyWord[1000 + 1];
    strcpy(copyWord, w);

    // reverse word
    while (firstAlpha < lastAlpha)
    {
        char temp = w[lastAlpha];
        w[lastAlpha] = w[firstAlpha];
        w[firstAlpha] = temp;
        firstAlpha++;
        lastAlpha--;
    }

    if (strcmp(w, copyWord) != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char word[1000 + 1];
    scanf("%s", word);

    int isPalindrome = is_palindrome(word);

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}