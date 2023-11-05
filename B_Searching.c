#include <stdio.h>

int main()
{
    int n, i, k, found = 0, index;
    scanf("%d", &n);
    int number[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (number[i] == k)
        {
            found = 1;
            index = i;
            break;
        }
    }

    if (found)
    {
        printf("%d\n", index);
    }
    else
    {
        printf("%d\n", -1);
    }
    return 0;
}