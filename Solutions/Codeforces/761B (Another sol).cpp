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

int a[101], b[101];

bool EQ(int a[], int b[], int n)
{
    loop(n) if(a[i] != b[i])    return false;

    return true;
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, l;   cin >> n >> l;
    loop(n)     cin >> a[i];
    loop(n)     cin >> b[i];

    for(int k = 0; k < l; k++)
    {
        loop(n) a[i] = (a[i]+1)%l;
        sort(a, a+n);

        if(EQ(a,b,n))
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
