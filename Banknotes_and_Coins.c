#include <stdio.h>

int main()
{
    double notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    double totalMoney;
    scanf("%lf", &totalMoney);
    printf("NOTAS:\n");
    for (int i = 0; i <= 5; i++)
    {
        int needNote = totalMoney / notes[i];
        totalMoney -= notes[i] * needNote;
        printf("%d nota(s) de R$ %.2lf\n", needNote, notes[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i <= 5; i++)
    {
        int needCoin = totalMoney / coins[i];
        totalMoney -= coins[i] * needCoin;
        printf("%d moeda(s) de R$ %.2lf\n", needCoin, coins[i]);
    }

    return 0;
}