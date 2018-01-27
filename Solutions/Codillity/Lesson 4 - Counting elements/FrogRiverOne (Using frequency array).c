
#define max(a,b)    (((a) > (b))? (a) : (b))

int solution(int X, int A[], int N)
{
    int falltime[X+1];

    for(int i = 1; i <= X; i++)
    {
        falltime[i] = -1;
    }

    for(int i = N-1; i >= 0; i--)
    {
        falltime[A[i]] = i;
    }

    int arrivaltime = falltime[1];

    for(int i = 1; i <= X; i++)
    {
        if(falltime[i] == -1)   return -1;

        arrivaltime = max(arrivaltime, falltime[i]);
    }

    return arrivaltime;
}
