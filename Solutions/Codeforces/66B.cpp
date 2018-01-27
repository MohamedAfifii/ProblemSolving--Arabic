//All the C++ libraries.
//#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<double, pii> pdii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;

#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)

#define MP make_pair
#define PB push_back
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
#define clr(x, val)	memset((x), (val), sizeof(x))
#define endl '\n'
/*****************************************************************************************/

int a[1000+9];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n;  cin >> n;
    loop(n) cin >> a[i];

    int best = 0;
    for(int start = 0; start < n; start++)
    {
        int ans = 1;

        int h = a[start];
        for(int i = start+1; i < n; i++)
        {
            if(a[i] <= h)   h = a[i], ans ++;
            else break;
        }

        h = a[start];
        for(int i = start-1; i >= 0; i--)
        {
            if(a[i] <= h)   h = a[i], ans ++;
            else break;
        }

        best = max(best, ans);
    }

    cout << best << endl;
    return 0;
}
