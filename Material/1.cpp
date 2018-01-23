
///1- Introduction / Complexity of algorithms

///Who is this for?
- Conditions
- Loops
- Arrays
- Functions
- struct


///Steps of solving a problem.
1- Find an idea.
2- Validate the idea (Correctness and performance).

///Correctness
int largest = 0;
for(int i = 0; i < n; i++)
{
    if(a[i] > largest)  largest = a[i];     ///largest = max(largest, a[i]);
}

Example: a = 2 5 3 1 2
What if the array contains only negative values ??
Example: a = -2, -3, -5, -1, -3


///Performance:

///O(N)
int largest = 0;
for(int i = 0; i < n; i++)
{
    if(a[i] > largest)  largest = a[i];
}

///O(N^2)
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        //O(1) code
    }
}

///O(N)
for(int i = 0; i < n; i++)
{
    //O(1) code
}

for(int i = 0; i < n; i++)
{
    //Another O(1) code
}

Some sites tell you what the algorithm of your code should be.
While others let you deduce it from the size of the input.
>>> By experience, see the table.


///Problem (Codility):
Divide the array into two parts such that the absolute difference between the sum
of the two parts is minimal.
Given that the array size is [2, 10^5], and the array elements are [-1000, 1000].

Example:

        a = 2 5 3 1 2 4        >>> answer = 3


>>> Validate the idea not the code !

3- Code it!

int solution(int a[], int n)
{
    int best = 1e9;

    for(int i = 0; i < n-1; i++)
    {
        int left = 0, right = 0;

        for(int j = 0; j <= i; j++)     left += a[j];
        for(int j = i+1; j < n; j++)     right += a[j];

        ///best = min(best, abs(left-right))
    }

    return best;
}

int solution(int a[], int n)
{
    int left = a[0];

    int right = 0;
    for(int i = 1; i < n; i++)  right += a[i];      ///2 5 3 1 2 4

    int best = abs(left-right);

    for(int i = 1; i < n-1; i++)
    {
        left += a[i];
        right -= a[i];

        if(abs(left-right) < best)  best = abs(left-right);
    }


    return best;
}


4- Test your code.


///What should we learn?
- Computational thinking.
- Turn the idea into code.
>>> Experience and observation.

- General techniques:
    - Prefix sum
    - Frequency array
    - Binary search
    - Recursion
    - Brute force
    - Greedy
    - Dynamic programming
    - DFS
    - BFS

- Data structures:
    - Vector
    - Stack
    - Queue
    - Set
    - Priority queue
    - Map

    - DSU
    - Segment tree

- Algorithms:
    - GCD
    - Seive     //Prime numbers.
    - Dijkstra



///What will we benefit?
- Techniques, algorithms, complexity, ...
- Turn ideas into code.


