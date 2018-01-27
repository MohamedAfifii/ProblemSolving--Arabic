int a[100009], g[100009], c[100009], t[100009];
int ans[50009];

struct Results solution(char *S, int P[], int Q[], int M) 
{
    int N = strlen(S);
    
    a[0] = (S[0] == 'A');
    g[0] = (S[0] == 'G');
    c[0] = (S[0] == 'C');
    t[0] = (S[0] == 'T');
    
    for(int i = 1; i < N; i++)
    {
        a[i] = a[i-1] + (S[i] == 'A');
        g[i] = g[i-1] + (S[i] == 'G');
        c[i] = c[i-1] + (S[i] == 'C');
        t[i] = t[i-1] + (S[i] == 'T');
    }
    
    for(int i = 0; i < M; i++)
    {
        int l = P[i], r = Q[i];
        
        if(a[r] > a[l] || S[l] == 'A')             ans[i] = 1;  
        else if(c[r] > c[l] || S[l] == 'C')        ans[i] = 2;
        else if(g[r] > g[l] || S[l] == 'G')        ans[i] = 3;
        else                        			   ans[i] = 4;     //You can git rid of the array 't'
    }
    
    struct Results result;
    result.A = ans;
    result.M = M;
    return result;
}
