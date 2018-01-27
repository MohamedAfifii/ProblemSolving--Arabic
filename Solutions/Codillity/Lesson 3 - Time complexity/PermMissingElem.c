

short exists[100000+9];    //Global variables are initialized to zero.

int solution(int A[], int N) 
{
    for(int i = 0; i < N; i++)  exists[A[i]] = 1;
    
    for(int i = 1; i <= N; i++)
    {
        if(exists[i] == 0)    return i;   
    }
    
    return N+1;
}


