
int counters[100009];

#define max(a, b) (((a) > (b))? (a) : (b))

struct Results solution(int N, int A[], int M) 
{ 
    int largest = 0;
    int lowerbound = 0;
    
    for(int i = 0; i < M; i ++)
    {
        if(A[i] == N+1)     lowerbound = largest;
        
        else
        {
            counters[A[i]] = 1+max(lowerbound, counters[A[i]]);	
            
            if(counters[A[i]] > largest)  largest = counters[A[i]];
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        counters[i] = max(lowerbound, counters[i]);    
    }
    
    struct Results result;
    result.C = counters+1;  //Because the result starts from counters[1] not counters[0]
    result.L = N;
    return result;
}
