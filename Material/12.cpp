
///12- Data structures (Sets)

///Sets are containers, on which you can perform the following operations:
/**
- Add(7)		O(log(n))
- Remove(7)		O(log(n))
- Does the set contain a 7? 		O(log(n))
- Find the smallest/largest number	O(1)
- Traverse the elements in ascending/descending order.
*/
///How can it answer queries like "Does the set contain a 7?" in O(log(n))?


#include <iostream>
#include <set>
using namespace std;

int main()
{
	int a[] = {3, 5, 2, 4, 9, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);
	
	set<int> s;
	for(int i = 0; i < n; i++)	s.insert(a[i]);		//s = 2 3 4 5 9
	
	set<int>::iterator it;
	for(it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
		
	cout << endl;
	return 0;
}


///How to:
1- Add an element:
	s.insert(x);

2- Remove an element:
	s.erase(x);
	s.erase(it);	//s.erase(s.begin())
	
3- Find whether the set contains a certain element or not:
	if(s.find(x) == !s.end())
	
4- Traverse:
	set<int>::iterator it;
	for(it = s.begin(); it != s.end(); it++)
	{
	
	}


///Examples:
1- Codility (Odd occurrence):	1 5 9 3 5 3 1
>>> Can not be solved using frequency array because the elements had large values.
>>> We had to solve it by taking the XOR sum of the elements.

for(int i = 0; i < n; i++)
{
	if(s.find(a[i]) == s.end())	s.insert(a[i]);
	else						s.erase(a[i]);
}

return *(s.begin());

>>> This problem can be solved by sorting the array.


2- You are given an array of N elements, N <= 10^6.
For each contiguous sub array of size K, find the greatest element.

e.g. 5 3 1 2 7 2 7 3
>>>  5 3 7 7 7 7

>>> O(N^2)

///O(NlogN)

multiset<int> s;

for(int i = 0; i < k; i++)	s.insert(a[i]);
cout << *(s.rbegin()) << " ";

for(int i = k; i < n; i++)
{
	s.insert(a[i]);
	s.erase(s.find(a[i-k]));
	
	cout << *(s.rbegin()) << " ";
}
cout << endl;


///Sorting based on a different criterion:
1- Overload the < operator.
2- set<int, bool(*)(int, int)> s(preceed);


///NOTE: Sets can be used as priority queues.
set<pair<int, Anything>>

s.insert({priority, thing});
s.rbegin();

///For more info: cplusplus.com
