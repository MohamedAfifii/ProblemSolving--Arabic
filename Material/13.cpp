
///13- Data structures (Maps)

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> ageOf;

    ageOf["Mohamed"] = 20;
    ageOf["Ahmed"] = 30;

    ageOf["Mohamed"] ++;
    ageOf["Ahmed"] --;

    cout << ageOf["Mohamed"] << endl;
    cout << ageOf["Ahmed"] << endl;
    cout << ageOf["Mahmoud"] << endl;


    map<string, int>::iterator it;
    for(it = ageOf.begin(); it != ageOf.end(); it++)
    {
        pair<string, int> p = *it;

        cout << "The age of " << p.first << " is " << p.second << endl;
    }
}

///Maps are also implemented using BSTs!
///They are essentially sets of of pairs.

///Accessing a key is O(logN)
///Keys are traversed in ascending order.


///Why can't we just sort the arrays?
