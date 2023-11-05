#include <stdio.h>

void odd_even()
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d %d\n", even, odd);
}

int main()
{
    odd_even();
    return 0;
}