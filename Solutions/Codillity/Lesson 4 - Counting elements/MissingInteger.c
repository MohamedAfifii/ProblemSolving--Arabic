
int exists[100009];

int solution(int A[], int N)
{
    for(int i = 0; i < N; i++)
    {
        if(A[i] > 0 && A[i] <= N) exists[A[i]] = 1;
    }

    for(int i = 1; i <= N; i++)
    {
        if(!exists[i])    return i;
    }

    return N+1;
}
