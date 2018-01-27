

int pre[100009];

int solution(int A[], int N) 
{
    pre[0] = (A[0] == 0);
    for(int i = 1; i < N; i++)  pre[i] = pre[i-1] + (A[i]==0);
    
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        if(A[i] == 1)   ans += pre[i];
        if(ans > 1e9)   return -1;
    }
    
    return ans;
}


