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

int dfs(int x, vector<int> g[], vector<bool>& vis){

	int sz = 1;
	vis[x] = true;
	for(auto y : g[x]){
		if(vis[y]) continue;
		sz += dfs(y, g, vis);
	}
	return sz;
}

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

    int q;
    cin >> q;

    while(q--){

    	int n, m, clib, croad;
    	cin >> n >> m >> clib >> croad;

    	std::vector<int> g[n];
    	while(m--){
    		int a, b;
    		cin >> a >> b;
    		--a, --b;
    		g[a].push_back(b);
    		g[b].push_back(a);
    	}

    	std::vector<bool> vis(n);

    	ll res = 0;
    	for(int i = 0; i < n; ++i){
    		if(!vis[i]){
    			int component_sz = dfs(i, g, vis);
    			res += clib + (component_sz - 1) * 1ll * min(clib, croad); 
				// at least one library must be built, the rest of this component can have libraries, or edges from that first library
    		}
    	}

    	cout << res << endl;

    }
	
 	return 0;
}
