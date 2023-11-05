#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n / 10 == 0 || n % 10 == 0)
    {
        printf("YES\n");
    }
    else if ((n / 10) % (n % 10) == 0)
    {
        printf("YES\n");
    }
    else if ((n % 10) % (n / 10) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

// passed