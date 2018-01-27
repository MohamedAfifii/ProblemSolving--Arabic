#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

char s[109];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> s;

    int i = 0, upper = 0, lower = 0;
    while(s[i])
    {
        if(s[i] >= 'a' && s[i] <= 'z')  lower++;
        else                            upper++;
        i++;
    }

    i = 0;
    if(upper > lower)   while(s[i]) s[i] = toupper(s[i]), i++;
    else                while(s[i]) s[i] = tolower(s[i]), i++;

    cout << s << endl;
    return 0;
}
