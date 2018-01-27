//All the C++ libraries.
//#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;


#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define endl '\n'

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int c = 0;

    int ans = 0;
    loop(n)
    {
        int t;
        cin >> t;

        if(t == 1)
        {
            if(a)   a--;
            else if(b)  b--, c++;
            else if(c)  c--;
            else ans ++;
        }

        else
        {
            if(b)   b--;
            else ans += 2;
        }

    }

    cout << ans << endl;
    return 0;
}