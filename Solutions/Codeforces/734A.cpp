#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n;  cin >> n;
    char s[n+1];        ///+1 for the null character.
    cin >> s;

    int a = 0, d = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A') a++;
        else            d++;
    }

    if(a > d)       cout << "Anton" << endl;
    else if(a < d)  cout << "Danik" << endl;
    else            cout << "Friendship" << endl;
    return 0;
}
