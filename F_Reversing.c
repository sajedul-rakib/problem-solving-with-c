#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int numbers[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        i++;
        j--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}