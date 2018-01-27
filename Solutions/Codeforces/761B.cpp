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

int a[60], b[60];
int dista[60], distb[60];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, l;   cin >> n >> l;
    loop(n) cin >> a[i];
    loop(n) cin >> b[i];

    ///dista[i] : The distance between the barrel a[i] and the one before it.
    for(int i = 1; i < n; i++)  dista[i] = a[i]-a[i-1];
    for(int i = 1; i < n; i++)  distb[i] = b[i]-b[i-1];

    ///The distance "from" the last barrel "to" the first barrel.
    dista[0] = (l-a[n-1])+a[0];
    distb[0] = (l-b[n-1])+b[0];


    ///Check if we can rotate the array "dista" k rotations to get "distb".
    for(int k = 0; k < n; k++)
    {
        bool coincide = true;
        for(int i = 0; i < n; i++)
        {
            if(distb[(i+k)%n] != dista[i])
            {
                coincide = false;
                break;
            }
        }

        if(coincide)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}