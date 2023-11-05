#include <stdio.h>

int main()
{
    long long int n, m, k; // respectly n for eye ,m for mouth and k for body
    scanf("%lld%lld%lld", &n, &m, &k);

    if (n == 0)
    {
        printf("0\n");
    }
    else
    {
        long long int totalBody = 0;
        if (n < m && n < k)
        {
            totalBody += n;
            m -= n;
            k -= k;
        }
        else if (m < n && m < k)
        {
            totalBody += m;
            n -= m;
            k -= m;
            if (k > 0 && n > 0)
            {
                if (n / 2 > k)
                {
                    totalBody += k;
                }
                else
                {
                    totalBody += n / 2;
                }
            }
        }
        else
        {
            totalBody += k;
            n -= k;
            m -= k;
        }

        printf("%lld\n", totalBody);
    }

    return 0;
}