#include <iostream>
#include <stdio.h>

using namespace std;

#define loop(n) for(int i = 0; i < n; i++)

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n;  cin >> n;
    int ans = 0;

    loop(n)
    {
        int a, b, c;    cin >> a >> b >> c;
        int num = a+b+c;
        if(num >= 2)    ans++;
    }

    cout << ans << endl;
    return 0;
}
