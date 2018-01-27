//All the C++ libraries.
//#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;


#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)

#define endl '\n'

int a[60][60];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n;
    cin >> n;
    lp(i, 0, n)
        lp(j, 0, n) cin >> a[i][j];

    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < n; y++)
        {
            if(a[x][y] == 1)    continue;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(a[x][j]+a[i][y] == a[x][y])  goto out;
                }
            }

            cout << "No" << endl;
            return 0;

            out: ;
        }
    }

    cout << "Yes" << endl;
    return 0;
}