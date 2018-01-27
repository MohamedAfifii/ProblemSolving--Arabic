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

int f[300];
bool seen[300];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, k;   cin >> n >> k;
    string s;   cin >> s;

    for(auto c: s)  f[c]++;

    int active = 0;
    for(auto c: s)
    {
        if(!seen[c])
        {
            active ++;
            seen[c] = true;
        }

        if(active > k)
        {
            cout << "YES" << endl;
            return 0;
        }

        f[c]--;
        if(!f[c])   active --;
    }

    cout << "NO" << endl;
    return 0;
}
