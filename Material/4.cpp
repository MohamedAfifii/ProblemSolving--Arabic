///4- Complexity of alogrithms II

///O(N)
for(int i = 0; i < n; i++)
{
    //O(1)
}


///O(N)
for(int i = 0; i < n; i++)
{
    //O(1)
}

for(int i = 0; i < n; i++)
{
    //O(1)
}


///O(N^2)                       Note: O(N^2) may be doable (for N <= 10^4).
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        //O(1)
    }
}

///O(N*M)
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {
        //O(1)
    }
}


///O(N+M)       Two sequential codes
You are given an array a of size N.
Where 0 < ai < M.
Print the element that occured twice in the array.

int count[M];   //Initialize it to zero

for(int i = 0; i < N; i++)
    count[a[i]] ++;

for(int i = 0; i < M; i++)
    if(count[i] == 2)   return i;



///O(log(N))
while(N > 0)
{
    //O(1) code.
    N = N/2;
}


///O(log(N))
int i = 1;
while(i < N)
{
    //O(1) code.
    i = i*2;
}


///O(N*log(N))      e.g. Merge sort.
int i = 1;
while(i < N)
{
    for(int j = 0; j < N; j++)
    {
        //O(1)
    }

    i = i*2;
}
///Note: O(N*log(N)) is FAST !
///10^6 * log(10^6) = 20 * 10^6
///(10^6) ^ 2 = 10^12


for(int i = 0; i < n; i++)
{
    for(int j = 0; j <= i; j++)
    {
        printf("Hello\n");
    }
}

///What is the complexity of this??
How many times will the word hello be printed?
1 + 2 + 3 + 4 + 5 + ... + n = n*(n+1)/2 = (n^2)/2 + n/2

>> O(n^2 + n) = O(n^2)


///Similarly        (This structure frequently used in problems).
for(int i = 0; i < n; i++)
{
    for(int j = i+1; j < n; j++)
    {
        //O(1)
    }
}

Example: Find whether the array contains two numbers that sum to 15.

        1 5 3 6 10

Note: This could be done using the frequency array if the numbers are small in O(N+M).
But:  Maybe O(N^2) is better than O(N+M) >>> Brute force.
If the array is sorted, this problem could be solven using the caterpillar technique in O(n).

///Usage of the frequency array is limited by M.
///In most of Codeforces' problems, the memory limit is 256MB.
///We usually don't deal with size complexity, and rather validate the solution by hand.


///Want to learn more about the analysis of algorithms?


///How to be more efficient?
1- Write the constrains on paper.
2- Bank of ideas (ON PAPER).
3- Code / Pseudocode (ON PAPER !).
>>> Reduces debugging time (Try it yourself).
>>> Useful for teams.
