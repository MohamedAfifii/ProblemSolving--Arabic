
///11- Sorting (Compare functions)

#include <iostream>
#include <algorith>
using namespace std;

int a[] = {2, 7, -3, 10, -2, 5, -99};

bool preceed(int x, int y)
{
	return x > y;
}

int main()
{
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n, preceed);
	
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	
	return 0;
}

/**
Knapsack problem
If your bag can carry only k grams, 
what is the maximum value that you can get?
*/

#include <iostream>
#include <algorithm>
using namespace std;

#define loop(n) for(int i = 0; i < n; i++)

int w[] = {6, 10, 3, 5, 7, 3};
int v[] = {6, 2,  1, 8, 3, 5};


struct item
{
	int weight, val;
};

bool preceed(item x, item y)
{
	return x.val > y.val;
}

int main()
{
	int n = sizeof(w)/sizeof(w[0]);
	
	item a[n];
	loop(n)
	{
		a[i].val = v[i];
		a[i].weight = w[i];
	}
	
	sort(a, a+n, preceed);
	
	int remWeight = 20;
	int totalVal = 0;
	loop(n)
	{
		int grams = min(a[i].weight, remWeight);
		totalVal += grams*a[i].val;
		remWeight -= grams;
	}
	
	cout << totalVal << endl;
	return 0;
}


//Another approach:
struct item
{
	int weight, val;
	
	bool operator< (item other) const
	{
		return this->val > other.val;
	}
};


///Using pairs:

pair<int, int> p;
p.first = 3;
p.second = 7;

int main()
{
    int n = sizeof(w)/sizeof(w[0]);

    pair<int, int> a[n];        ///<value, weight>
    loop(n)
    {
        a[i].first = v[i];
        a[i].second = w[i];
    }

    sort(a, a+n);
    reverse(a, a+n);

    int remWeight = 20;
    int totalVal = 0;
    loop(n)
    {
        int grams = min(a[i].second, remWeight);

        totalVal += grams*a[i].first;
        remWeight -= grams;
    }

    cout << totalVal << endl;
    return 0;
}
*/
