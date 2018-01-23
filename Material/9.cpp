
///9- Data structures (Stacks)

/**
Stack:
- LIFO

- push
- pop
- top
- size
- empty
*/



/**
Problem: SPOJ (STPAR)

4 5 2 3 1

4 5 2   1
      3

4 5   2 1
    3

4 5     3 2 1

4     3 2 1
   5

       5 4 3 2 1

Another example:

4 2 5 3 1


4 2 5       1
        3


4 2         1
        5
        3
*/

int waitFor = 1;
bool can = true;

loop(n)
{
    int nextCar;    cin >> nextCar;

    while(!s.empty() && waitFor == s.top())
    {
        s.pop();
        waitFor ++;
    }

    if(nextCar == waitFor)    waitFor++;
    else if(s.empty() || nextCar < s.top())  s.push(nextCar);
    else    can = false;
}

if(can) cout << "yes" << endl;
else    cout << "no"  << endl;


>>> Try to solve it yourself!


/**
Real-life applications:
- Call stack
- DFS
- Evaluating mathematical expressions.
- Lots more!
*/
