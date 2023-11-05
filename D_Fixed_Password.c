#include <stdio.h>

int main()
{
    int enter_password, correct_password = 1999;

    while (scanf("%d", &enter_password) != EOF)
    {
        /* code */
        if (enter_password == correct_password)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}