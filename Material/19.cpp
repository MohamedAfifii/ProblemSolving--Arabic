
///19- Dynamic programming I

- Knapsack problem:

Max weight = 10

index:              0  1  2
Value per gram:     30 20 10
Available weight:   5  1  5

The greedy solution is optimal iff you can take a fraction of the items.


Brute Force solution:

int best = 0;

for(int mask = 0; mask < (1<<n); mask++)    ///000 , 001, 010, 011, 100, 101, 110, 111
{
    int price = 0, weight = 0;

    loop(n) if(mask & (1<<i)) /// 001 010 100
    {
        price += p[i];
        weight += w[i];
    }

    if(weight <= maxWeight) best = max(best, price);
}

Problem: Exponential time complexity!



Brute force II (Using recursion)

sol(i, k)   = max(leave i, take i)
            = max(sol(i+1, k), p[i]+sol(i+1, k-w[i]));

>>> ans = sol(0, maxWeight)

int sol(int i, int k)
{
    if(i == n)  return 0;

    if(k < w[i])    return sol(i+1, k);
    else            return max(sol(i+1, k), p[i]+sol(i+1, k-w[i]));
}

Problem: Still exponential!

memoization

int dp[MAXN][MAXW];

int sol(int i, int k)
{
    if(i == n)  return 0;
    if(dp[i][k] != -1)    return dp[i][k];

    if(k < w[i])    return dp[i][k] = sol(i+1, k);
    else            return dp[i][k] = max(sol(i+1, k), p[i]+sol(i+1, k-w[i]));
}


How to tackle the problem:
1- Choose the state representation.
2- Define sol(state).
3- Write down the recurrence formula for sol(state).
4- Define the base cases.
5- Decide the values to return at the base cases.
6- Handle the invalid calls

Example: Given an NxM grid, find the maximum possible sum of rewards
on a path from (0, 0) to (n-1, m-1), if you are allowed to move only to the
right or downward.

>>> The greedy solution is again not optimal!

3 4 3
2 3 4
9 0 0

1- state: (i, j)
2- sol(i, j): The maximum possible sum of rewards if you start at (i,j)
3- sol(i, j) = a[i][j] + max(sol(i+1, j), sol(i, j+1))
4- Base cases: i==n-1, j==m-1
5- if(i==n-1 && j==m-1) return a[i][j]
6- if(i==n || j==m) return 0

int dp[MAXN][MAXM];

int sol(int i, int j)
{
    if(i==n-1 && j==m-1)    return a[i][j];
    if(i==n || j==m) return 0;
    if(dp[i][j] != -1)  return dp[i][j];

    return dp[i][j] = a[i][j] + max(sol(i+1, j), sol(i, j+1));
}


>>> Revisit the knapsack problem.
>>> Complexity?

Space complexity = O(numStates)
Time complexity  = O(numStates * complexity of the dp function)

///How to construct the path?

void print(int i, int j)
{
    if(i==n-1 && j==m-1)    return;

    int ans = sol(i, j);

    if(ans == a[i][j]+sol(i+1, j))
    {
        cout << "Down" << endl;
        print(i+1, j);
    }

    else
    {
        cout << "Right" << endl;
        print(i, j+1);
    }
}

///It is better to return a negative value for invalid calls.
