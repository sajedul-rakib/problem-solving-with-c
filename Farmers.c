#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d%d%d", &m1, &m2, &d);

        if (m2 == 0)
        {
            printf("%d\n", 0);
        }
        else
        {
            int totalFarmer = m1 + m2;
            int needDaysForDoSameWorkForOneFarmer = m1 * d;
            double afterAddTotalFarmerNeedDaysForSameWork = needDaysForDoSameWorkForOneFarmer / (totalFarmer * 1.0);
            printf("%d\n", d - (int)afterAddTotalFarmerNeedDaysForSameWork);
        }
    }

    return 0;
}