#include <stdio.h>
int main()
{
    int m, n, i = 1;
    scanf("%d", &n);
    scanf("%d", &m);
    while (i <= m)
    {

        printf("%d*%d=%d\n", i, n, (i * n));

        i++;
    }
    return 0;
}