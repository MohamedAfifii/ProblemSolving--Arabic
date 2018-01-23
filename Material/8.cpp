
///8- Modular arithmetic

>>> b divided by a ==> q , r

(b: dividend, a: divisor, q:quotient, r:remainder)

b/a = q
b%a = r

13/10 = 1
13%10 = 3

b = a*q + r
13 = 10*1 + 3


///Properties:

1 - N%m < m

N       0 1 2 3 4 5 6 7 8 9 10 11 12 13 ...
N%5     0 1 2 3 4 0 1 2 3 4 0  1  2  3  ...

>>> Periodic

2 - (a+b)%m = (a%m + b%m)%m

(56+47)%10 = (56%10 + 47%10)%10 = (6+7)%10 = 13%10 = 3
(56+47)%10 = 103%10 = 3


///Applications:

1- If today is Tuesday, what day will it be after 40 days?
>>> Represent each day with a number from 0 to 6.
>>> Let Tuesday be 3.

next = (day+n)%7

next = (3+40)%7 = (3%7 + 40%7)%7 = (3 + 5)%7 = 8%7 = 1
next = (3+40)%7 = 43%7 = 1


What day was it 40 days ago?

prev = (day-n)%7
prev = (3-40)%7 = -37%7 = -2 ==> 5

If the result is negative, add m.

In general ((day-n)%7 + 7)%7



2- Codility (Cylcic rotations):

>>> k = k%N

Or more smartly,

for(int i = 0; i < N; i++)              0 1 2 3 4 5 6 7 8 9
    B[(i+k)%N] = A[i];


Other applications: Clock arithmetic, circles, bottle rotation, ...


3- Add(or multiply) n integers together, and output the result %m.

int sum = 0;
for(int i = 0; i < n; i++)
    sum = (sum + a[i]%m)%m;

