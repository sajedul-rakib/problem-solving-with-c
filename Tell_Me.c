
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int found = 0;
        int n;
        scanf("%d", &n);
        int number[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &number[i]);
        }
        int x;
        scanf("%d", &x);

        for (int i = 0; i < n; i++)
        {
            if (number[i] == x)
            {
                found = 1;
            }
        }

        if (found)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}