#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 4 == 0 && a != 0 && a < 240)
    {
        printf("Theory session");
    }
    else if (a < 120 && a >= 1)
    {
        printf("Lab 1");
    }
    else if (a < 240 && a > 120)
    {
        printf("Lab 2");
    }
    else if (a > 240 || a < 1)
    {
        printf("Incorrect Register Number");
    }

    return 0;
}