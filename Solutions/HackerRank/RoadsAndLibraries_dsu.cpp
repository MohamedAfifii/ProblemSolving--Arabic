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


int find(int x, std::vector<int>& ds){
	return ds[x] < 0 ? x : ds[x] = find(ds[x], ds);
}

void unite(int x, int y, std::vector<int>& ds){
	int xx = find(x, ds);
	int yy = find(y, ds);
	if(xx != yy){
		if(ds[xx] > ds[yy]) swap(xx, yy);
		ds[xx] += ds[yy];
		ds[yy] = xx;
	}
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

	    std::vector<int> ds(n, -1);

    	while(m--){
    		int a, b;
    		cin >> a >> b;
    		--a, --b;
    		unite(a, b, ds);
    	}

    	ll res = 0;
    	for(int i = 0; i < n; ++i){
    		if(ds[i] < 0){
    			int component_sz = abs(ds[i]);
    			res += clib + (component_sz - 1) * 1ll * min(clib, croad); 
				// at least one library must be built, the rest of this component can have libraries, or edges from that first library
    		}
    	}

    	cout << res << endl;
    }
	
 	return 0;
}
