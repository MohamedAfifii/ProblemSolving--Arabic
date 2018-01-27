#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define ll long long
#define inf (ll)1e18
#define all(x) x.begin(), x.end()

const int MX = 200020;
const int N = 1000060;
const int mod = ((int)1e9 + 7);

int main(){
/*
    Hossam ^_^
     ___     ___
    (^_^)   (^_^)
   /( | )\ /( | )\
     | |     | |
*/
    cin.tie(0);
    cin.sync_with_stdio(0);

    #ifdef Cyborg101
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	

	const int weight = 6;

	int q;
	cin >> q;

	while(q--){
    	
    	int n, m;
   		cin >> n >> m;

   		std::vector<int> g[n];
	    while(m--){
	    	int a, b;
	    	cin >> a >> b;
	    	--a, --b; //zero-indexed vertices
	    	g[a].push_back(b);
	    	g[b].push_back(a);
	    }

	    int s;
	    cin >> s;
	    --s;

	    int mx_weight = (n - 1) * weight + 1;

	    std::vector<int> bst(n, mx_weight);
	    bst[s] = 0;

	    queue<int> q;
	    q.push(s);

	    while(!q.empty()){
	    	auto x = q.front();
	    	q.pop();

	    	for(auto y : g[x]){
	    		if(bst[x] + weight < bst[y]){
	    			bst[y] = bst[x] + weight;
	    			q.push(y);
	    		}
	    	}
	    }

	    for(int i = 0; i < n; ++i){
	    	if(i == s) continue;
	    	if(bst[i] == mx_weight)
	    		bst[i] = -1;
	    	cout << bst[i] << " \n"[i == n - 1]; 
	    }
	}
	
 	return 0;
}
