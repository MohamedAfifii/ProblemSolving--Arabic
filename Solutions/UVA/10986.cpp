#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using edge = pair<int,int>;

ll dijkstra(vector<vector<edge>> const& graph, int s, int t) {
  using state = pair<ll,int>; // <time, node>
  using pqueue = priority_queue<state, vector<state>, greater<state>>; // shortest time first (higher priority)
  
  pqueue pq;
  vector<ll> shortest_time(graph.size(), -1); // -1 means not visited

  shortest_time[s] = 0ll; // as we are already there
  pq.push(make_pair(0ll, s));
  while(pq.size()) {
    ll time;
    int node;
    tie(time, node) = pq.top(); pq.pop();

    if(node == t) // did we reach the destination
      return time;

    for(const edge& e : graph[node]) {
      int v, w;
      tie(v, w) = e;

      if(shortest_time[v] != -1 && shortest_time[v] <= shortest_time[node] + w)
        continue; // we can't improve the shortest time

      shortest_time[v] = shortest_time[node] + w;
      pq.push(make_pair(shortest_time[v], v));
    }
  }
  
  return -1; // no path
}

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  int N;
  cin >> N;

  for(int test = 1; test <= N; ++test) {
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    vector<vector<edge>> graph(n);

    while(m--) {
      int u, v, w;
      cin >> u >> v >> w;
      graph[u].emplace_back(v, w);
      graph[v].emplace_back(u, w);
    }

    ll time = dijkstra(graph, s, t);

    if(time >= 0)
      cout << "Case #" << test << ": " << time << '\n';
    else // no path
      cout << "Case #" << test << ": unreachable\n";
  }
}
