#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    while (b <= a)
    {
        printf("%d\n", a);
        a--;
    }
    return 0;
}