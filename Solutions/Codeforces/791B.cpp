#include <bits/stdc++.h>
using namespace std;

struct dsu {
  int n;
  vector<int> fa;

  dsu(int size) {
    n = size;
    fa.assign(n+1, -1);
  }

  // fa[x] >= 0 means fa[x] is the parent of x
  // fa[x] < 0 means x is the representative of -fa[x] members
  
  int component_size(int x) {
    return -fa[find(x)];
  }

  bool is_representative(int x) {
    return fa[x] < 0;
  }

  int find(int x) {
    return is_representative(x) ? x : fa[x] = find(fa[x]);
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) {
      fa[x] += fa[y]; // add the number of y's component
      fa[y] = x; // make x parent of y
    }
  }
};

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  dsu d(n);
  vector<int> friends(n+1);

  while(m--) {
    int a, b;
    cin >> a >> b;

    friends[a]++;
    friends[b]++;

    d.unite(a, b);
  }

  for(int i = 1; i <= n; ++i) {
    if(friends[i] != d.component_size(i) - 1) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
}
