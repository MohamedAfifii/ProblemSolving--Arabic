
#include <bits/stdc++.h>
using namespace std;

int v[100009], u[100009];
long long pv[100009], pu[100009];

int main()
{
    int n;  cin >> n;
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) u[i] = v[i];
    sort(u+1, u+n+1);   ///Elements in u are numbered from 1 to n.

    for(int i = 1; i <= n; i++) pv[i] = pv[i-1] + v[i];
    for(int i = 1; i <= n; i++) pu[i] = pu[i-1] + u[i];

    int m;  cin >> m;
    while(m--)
    {
        int t, l, r;    cin >> t >> l >> r;

        if(t == 1)  cout << pv[r]-pv[l-1] << endl;
        else        cout << pu[r]-pu[l-1] << endl;
    }

    return 0;
}

