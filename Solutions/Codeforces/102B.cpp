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

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    string s;   cin >> s;
    if(len(s) == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int sum = 0;
    loop(len(s))    sum += s[i]-'0';

    int ans = 1;
    while(sum/10)   ///While(sum has more than one digit)
    {
        int cpy = sum;
        sum = 0;
        while(cpy)
        {
            int digit = cpy%10;
            cpy /= 10;
            sum += digit;
        }

        ans ++;
    }

    cout << ans << endl;
    return 0;
}