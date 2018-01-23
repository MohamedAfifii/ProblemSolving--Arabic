#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

#define loop(n)     for(int i = 0; i < n; i++)
#define lp(i, s, e) for(int i = s; i < e; i++)

int h[39], a[39];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n;  cin >> n;
    loop(n) cin >> h[i] >> a[i];

    int ans = 0;
    lp(i, 0, n) lp(j, 0, n) if(h[i]==a[j])  ans++;

    cout << ans << endl;
    return 0;
}
