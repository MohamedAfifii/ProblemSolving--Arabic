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
	
    int n, m;
    cin >> n >> m;

    std::vector<int> g[n];
    for(int i = 0; i < m; ++i){
    	int a, b;
    	cin >> a >> b;
    	--a, --b; //zero-indexed squares
    	g[a].push_back(b);
    	g[b].push_back(a);
    }

    vector<int> res(n, 1); //set all square a policeman each

   	int mn_subtree = (int)1e6;
   	int idx = -1;
   	for(int i = 0; i < n; ++i){
   		if((int)g[i].size() < mn_subtree){
   			mn_subtree = (int)g[i].size();
   			idx = i;
   		} 
   	}

    res[idx] = 0; // remove the police man from cell 0 and all its neighbours
    for(auto x : g[idx])
    	res[x] = 0;

    for(auto x : res)
    	cout << x << " ";
	
 	return 0;
}
