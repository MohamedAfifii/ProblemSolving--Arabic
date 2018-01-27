#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string m, r;    cin >> m >> r;

        if(s1 == m)         s1 = r;
        else if(s2 == m)    s2 = r;

        cout << s1 << " " << s2 << endl;
    }
    return 0;
}