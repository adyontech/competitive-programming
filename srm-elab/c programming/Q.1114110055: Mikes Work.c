#include <stdio.h>
#include <string.h>
char s[101];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        int l = strlen(s), i;
        char c = s[0], h = s[1];
        if (l == 2)
        {
            if (c != h)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            int flag = 1;
            if (c != h)
            {
                for (i = 2; i < l; ++i)
                {
                    if (s[i] != s[i - 2])
                    {
                        printf("NO\n");
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                    printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}