#include <stdio.h>

int sum(int a[], int size, int index)
{
    if (index == size)
        return 0;
    return a[index] + sum(a, size, index + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int res = sum(A, n, 0);
    printf("%d", res);

    return 0;
}