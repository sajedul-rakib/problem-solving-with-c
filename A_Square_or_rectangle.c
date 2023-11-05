#include <stdio.h>

int main()
{
    int test, w, h;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d%d", &w, &h);
        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}