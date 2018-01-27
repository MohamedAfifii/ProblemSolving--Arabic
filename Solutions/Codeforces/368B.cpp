
#include <stdio.h>

int a[100009], l[100009];
int seen[100009];
int num[100009];        ///num[i] = number of distinct integers from a[i] to a[n-1]

int main(void)
{
    int n, m;   scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)     scanf("%d", &a[i]);
    for(int i = 0; i < m; i++)      scanf("%d", &l[i]);

    for(int i = n; i > 0; i--)
    {
        num[i] = num[i+1];

        if(seen[a[i]] == 0)
        {
            seen[a[i]] = 1;
            num[i] ++;
        }
    }

    for(int i = 0; i < m; i++)  printf("%d\n", num[l[i]]);

    return 0;
}
