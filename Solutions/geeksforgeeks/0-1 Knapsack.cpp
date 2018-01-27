#include <bits/stdc++.h>
using namespace std;

int const N = 100 + 4;

int n, w;
int values[N];
int weights[N];
int dp[N][N];

int solve(int count, int free_space) {
    if(count == 0)
        return 0;
    
    int& ans = dp[count][free_space];
    
    // was it answered before?
    if(ans != -1)
        return ans;
    
    // can we take it?
    int x = 0;
    if(weights[count-1] <= free_space)
        x = values[count-1] + solve(count - 1, free_space - weights[count-1]);
    
    // or we can skip it
    int y = solve(count-1, free_space);
    
    ans = max(x, y);
    
    return ans;
}

int main() {
    int tests;
    cin >> tests;
    
    while(tests--) {
        cin >> n >> w;
        
        for(int i = 0; i < n; ++i)
            cin >> values[i];
            
        for(int i = 0; i < n; ++i)
            cin >> weights[i];
        
        memset(dp, -1, sizeof dp);
        
        cout << solve(n, w) << '\n';
    }
}
