#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n, h;   cin >> n >> h;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int a;  cin >> a;
        if(a <= h)   ans ++;
        else         ans += 2;
    }

    cout << ans << endl;
    return 0;
}

