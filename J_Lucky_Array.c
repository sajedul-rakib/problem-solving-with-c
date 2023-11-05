#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int S[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &S[i]);
    }

    // rearrage to accending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (S[i] > S[j])
            {
                int temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }

    int minimumValue = S[0];
    int minimumValueCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (minimumValue == S[i])
        {
            minimumValueCount++;
        }
    }

    if (minimumValueCount % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}