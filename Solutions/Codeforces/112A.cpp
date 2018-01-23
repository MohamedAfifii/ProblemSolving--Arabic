#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

#define loop(n)         for(int i = 0; i < n; i++)

char s1[109], s2[109];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> s1 >> s2;
    int n = strlen(s1);
    for(int i = 0; i < n; i++)
    {
        int c1 = tolower(s1[i]), c2 = towlower(s2[i]);

        if(c1 < c2)
        {
            cout << -1 << endl;
            return 0;
        }

        if(c2 < c1)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}
