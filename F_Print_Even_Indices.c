#include <stdio.h>

void findEvenInReverseOrder(int x[], int size, int index)
{
    if (index == size)
        return;
    findEvenInReverseOrder(x, size, index + 1);
    if (index % 2 == 0)
    {
        printf("%d ", x[index]);
    }
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
    findEvenInReverseOrder(A, n, 0);

    return 0;
}