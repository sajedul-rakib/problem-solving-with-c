#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    char T[1001];
    scanf("%s %s", S, T);

    printf("%d %d\n%s %s\n", (int)strlen(S), (int)strlen(T), S, T);
    return 0;
}