
///7- Partial sum
>>> A simple but yet powerful technique!


Assume you have N counters, intialized to 0.

    1 2 3 4 5 6 7 8 9 10
    0 0 0 0 0 0 0 0 0 0

The updates are of the follwing form:
Increment the counters from L to R by K.

Example:    2 7 1
            4 9 3

    1 2 3 4 5 6 7 8 9 10
    0 1 1 4 4 4 4 3 3 0

>> Complexity: O(n*m), n = numCounters, m = numUpdates.

///Can we reduce the complexity to O(n+m)?

L = 2, R = 7, K = 1.

        1 2 3 4 5 6 7  8  9 10
a =     0 1 0 0 0 0 0 -1  0 0
pre =   0 1 1 1 1 1 1  0  0 0

.........................................

L = 2, R = 7, K = 1
L = 4, R = 9, K = 3

        1 2 3 4 5 6 7  8  9 10
a =     0 1 0 3 0 0 0 -1  0 -3
pre =   0 1 1 4 4 4 4  3  3  0


int a[MAXN+9];  ///Global.

for(int i = 0; i < m; i++)
{
    int l, r, k;    cin >> l >> r >> k;
    a[l] += k;
    a[r+1] -= k;
}

for(int i = 1; i < n; i++) a[i] += a[i-1];
