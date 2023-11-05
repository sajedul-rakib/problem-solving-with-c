#include <stdio.h>

void fun(int x)
{
    if (x == 0)
        return;
    fun(x / 10);
    printf("%d ", x % 10);
}

int main()
{
    int test, n;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}