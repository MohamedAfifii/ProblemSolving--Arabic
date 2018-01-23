
///3- Preprocessing: Prefix(cumulative) sum.

A = 2 5 5 3 5 2
Query:  O(N)
- What is the sum of elements in A[0:4]
- What is the sum of elements in A[2:5]
- How many times did 5 appear in A[1:3]

                0  1  2   3   4   5
A =             2  5  5   3   5   2
prefix_sum =    2  7  12  15  20  22


sum A[0:4] = prefix_sum[4]
sum A[2:5] = prefix_sum[5] - prefix_sum[1]


                0  1  2   3   4   5
A =             2  5  5   3   5   2
prefix_fives =  0  1  2   2   3   3

if(A[i] == 5)   prefix[i] = prefix[i-1]+1;
else            prefix[i] = prefix[i-1];

fives[1:3] = prefix_fives[3] - prefix_fives[0]



///The equilibrium problem:

        2 4 6 3 5 6 2

