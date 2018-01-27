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
#define all(a)   a.begin(),a.end()
#define clr(x, val)	memset((x), (val), sizeof(x))	//Not tested.
#define endl '\n'

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n = 10;
    char s[n][n];
    lp(i, 0, n) lp(j, 0, n) cin >> s[i][j];

    lp(y, 0, n) lp(x, 0, n)
    {
        if(s[y][x] != '.')  continue;

        int h = 1;
        for(int j = x+1; j < n && s[y][j] == 'X'; j++) h++;
        for(int j = x-1; j >= 0 && s[y][j] == 'X'; j--) h++;

        int v = 1;
        for(int i = y+1; i < n && s[i][x] == 'X'; i++) v++;
        for(int i = y-1; i >= 0 && s[i][x] == 'X'; i--) v++;

        int d1 = 1;
        for(int d = 1;; d++)
        {
            int i = y-d, j = x+d;
            if(i < 0 || i > n || j < 0 || j > n)    break;
            if(s[i][j] != 'X')  break;
            d1++;
        }
        for(int d = 1;; d++)
        {
            int i = y+d, j = x-d;
            if(i < 0 || i > n || j < 0 || j > n)    break;
            if(s[i][j] != 'X')  break;
            d1++;
        }

        int d2 = 1;
        for(int d = 1;; d++)
        {
            int i = y+d, j = x+d;
            if(i < 0 || i > n || j < 0 || j > n)    break;
            if(s[i][j] != 'X')  break;
            d2++;
        }
        for(int d = 1;; d++)
        {
            int i = y-d, j = x-d;
            if(i < 0 || i > n || j < 0 || j > n)    break;
            if(s[i][j] != 'X')  break;
            d2++;
        }

        if(h >= 5 || v >= 5 || d1 >= 5 || d2 >= 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }


    cout << "NO" << endl;
    return 0;
}