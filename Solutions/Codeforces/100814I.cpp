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

string binaryOf(int x)
{
    string s(32, '0');

    loop(32)
    {
        s[i] += x%2;
        x /= 2;
    }

    return s;
}

int dist(string s1, string s2)
{
    int d = 0;
    loop(32)    if(s1[i] != s2[i])  d++;

    return d;
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int T;  cin >> T;
    while(T--)
    {
        int n;  cin >> n;

        vector<string> vs;

        loop(n)
        {
            int x;  cin >> x;
            vs.PB(binaryOf(x));
        }

        int ans = 0;
        lp(i, 0, n) lp(j, i+1, n)   ans = max(ans, dist(vs[i], vs[j]));

        cout << ans << endl;
    }
    return 0;
}
