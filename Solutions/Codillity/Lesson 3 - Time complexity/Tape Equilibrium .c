int pre[100009];
#define min(a, b)   (a) < (b)? (a) : (b)

int solution(int A[], int N) 
{
    pre[0] = A[0];
    for(int i = 1; i < N; i++)  pre[i] = pre[i-1] + A[i];
    
    int sum = pre[N-1];
    int ans = 1e9;
    for(int i = 0; i < N-1; i++)
    {
        int left = pre[i];  
        int right = sum - left;
        
        ans = min(ans, abs(left-right));
    }
    
    return ans;
}
