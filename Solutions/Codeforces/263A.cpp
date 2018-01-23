#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

#define loop(n)         for(int i = 0; i < n; i++)
#define lp(i, s, e)     for(int i = s; i < e; i++)


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n = 5;
    int r, c;
    lp(i, 0, n) lp(j, 0, n)
    {
        int x;  cin >> x;
        if(x == 1)
        {
            r = i;
            c = j;
        }
    }

    int ans = abs(r-2)+abs(c-2);
    cout << ans << endl;

    return 0;
}
