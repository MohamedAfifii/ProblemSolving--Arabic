
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool f[300];

int main()
{
    int n;           scanf("%d", &n);
    char s[1000];    scanf("%s", s);

    for(int i = 0; i < n; i++)
    {
        char c = tolower(s[i]);
        f[c] = 1;
    }

    for(char c = 'a'; c <= 'z'; c++)
    {
        if(!f[c])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
