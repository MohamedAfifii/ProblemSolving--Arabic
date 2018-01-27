//All the C++ libraries.
//#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;

#define sci(a)	scanf("%d",&a)
#define scii(a, b)	scanf("%d%d",&a, &b)
#define pri(a)	printf("%d\n",a)
#define prii(a, b)	printf("%d %d\n",a, b)

#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define iterate(v, i)    for(int i = 0; i < (v).size(); i++)

#define SetBit(x, bit)      ((x) |= 1 << (bit))
#define ClrBit(x, bit)      ((x) &= ~(1 << (bit)))
#define ToggleBit(x, bit)   ((x) ^= 1 << (bit))
#define ReadBit(x, bit)     (((x) & 1 << (bit)) != 0)

#define MP make_pair
#define PB push_back
#define all(a)   a.begin(),a.end()

#define clr(x, val)	memset((x), (val), sizeof(x))	//Not tested.


#define endl '\n'

int main()
{
    int pages, base, maxi, inc, re;
    cin >> pages >> base >> maxi >> inc >> re;

    int read = base;
    int days = 0;
    while(1)
    {
        days ++;
        pages -= read;
        if(pages <= 0)  break;

        pages += re;
        read += inc;
        if(read > maxi) read = maxi;
    }

    cout << days << endl;
    return 0;
}