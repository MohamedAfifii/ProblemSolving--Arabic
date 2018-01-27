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

#define MAXN 1000000+9
int open[300], close[300];
int a[MAXN];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, k;   cin >> n >> k;
    string s;   cin >> s;
    clr(open, -1);

    lp(i, 0, len(s))
    {
        int c = (int)s[i];
        if(open[c] == -1)    open[c] = i;
        close[c] = i;
    }

    for(int c = 0; c < 300; c++)    if(open[c] != -1)
    {
        a[open[c]] ++;
        a[close[c]+1] --;
    }

    lp(i, 1, MAXN)  a[i] += a[i-1];

    int mx = 0;
    lp(i, 0, MAXN)  mx = max(mx, a[i]);


    if(mx > k)  cout << "YES" << endl;
    else        cout << "NO"  << endl;
    return 0;
}
