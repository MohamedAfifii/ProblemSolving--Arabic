#include <bits/stdc++.h>

using namespace std;

const int MX = 100020;

int n, m;
int has_cat[MX];
std::vector<int> g[MX];

int dfs(int x, int par, int consec){

	consec = has_cat[x] ? consec + 1 : 0;

	if(consec > m)
		return 0;

	int res = ((int)g[x].size() == 1 && x != 0); // 1 if vertex is a leaf, 0 otherwise

	for(auto y : g[x]){
		if(y == par) continue;
		res += dfs(y, x, consec);
	}

	return res;
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

    cin >> n >> m;

    for(int i = 0; i < n; ++i) cin >> has_cat[i];

    for(int i = 0; i < n - 1; ++i){
    	int a, b;
    	cin >> a >> b;
    	--a, --b; //zero-indexed vertices
    	g[a].push_back(b);
    	g[b].push_back(a);
    }

    int cnt = dfs(0, -1, 0);

    cout << cnt << endl;
	
 	return 0;
}
