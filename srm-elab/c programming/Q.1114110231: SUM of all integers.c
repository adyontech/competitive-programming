#include <stdio.h>
int main()
{
    int t, j;
    scanf("%d", &t);
    for (j = 0; j < t; j++)
    {
        int d, n, i;
        scanf("%d%d", &d, &n);
        for (i = 0; i < d; i++)
        {
            n = (n * (n + 1)) / 2;
        }
        printf("%d\n", n);
    }
    return 0;
}