#include <stdio.h>
#include <limits.h>

int find_max(int *x, int size, int index)
{
    if (size == index)
        return INT_MIN;
    int max = find_max(x, size, index + 1);
    if (x[index] > max)
    {
        return x[index];
    }
    else
        return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = find_max(num, n, 0);
    printf("%d\n", max);
    return 0;
}