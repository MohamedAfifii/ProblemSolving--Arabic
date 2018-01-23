#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;   cin >> a >> b;
    int days = 0;

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        days ++;
    }

    cout << days << endl;
    return 0;
}
