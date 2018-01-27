
//All the C++ libraries.
//#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> piii;
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

char a[101][101];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, m;   cin >> n >> m;

    int num = 0;
    int l = 1000, r = -1, t = 1000, b = -1;
    lp(i, 0, n) lp(j, 0, m)
    {
        char c; cin >> c;
        if(c == 'B')
        {
            l = min(l, j);
            r = max(r, j);
            t = min(t, i);
            b = max(b, i);
            num ++;
        }
    }

    if(r == -1)
    {
        cout << 1 << endl;
        return 0;
    }

    int w = r-l+1, h = b-t+1;
    int side = max(h, w);
    if(side > n || side > m)
    {
        cout << -1 << endl;
        return 0;
    }

    int ans = side*side - num;
    cout << ans << endl;
    return 0;
}