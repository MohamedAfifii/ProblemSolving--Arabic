
///6- Overflow and type casting.

/**
Concept of overflow:

 11111111
+
 00000001
=
100000000

>>> Overflow happens because of the limited capacity of our data type.
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 100000;
    long long y = (long long)x*x;
    cout << y << endl;
    return 0;
}

/*
///Data types:
double
float
long long
int
short
char

During any operation, if the types of the two source operands are not the same,
the compiler creates a new temporary variable and performs an implicit up-casting.

int a;
short b;
a+b >> a + (int)b

The result will have the same data type as the source operands (and this is the problem).

When we say:
long long y = x+1;

It will be executed as:
unsigned int temp = x+1;
long long y = (long long)temp;


The solution is: Explcitly cast one of the operands to long long

long long y = (long long)x + 1;


///In a nut shell:
If you are afraid of overflow:
1- Declare the destination variable as long long.
2- Cast one of the operands.

///What if the result may exceed the capacity of long long ??

*/
