
/// 17 - Graph (Dijkstra)
>>> Finds the shortest path in weighted graphs.

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int T;  cin >> T;
    lpe(t, 1, T)
    {
        int n, m, src, dest;     cin >> n >> m >> src >> dest;
        vector<vii> edges(n+9);

        ///Construct the graph
        loop(m)
        {
            int a, b, w;    cin >> a >> b >> w;
            edges[a].PB({b, w});          ///<Neighbor, edgeCost>
            edges[b].PB({a, w});
        }

        ///Dijkstra
        vi cost(n+9, -1);
        set<pii> s;
        s.insert({0, src1});           ///<totalCost, node>
        s.insert({0, src2});

        while(!s.empty())
        {
            pii p = *(s.begin());   s.erase(p);
            int node = p.second, nodeCost = p.first;
            if(cost[node] != -1)    continue;

            cost[node] = nodeCost;
            for(pii edge: edges[node])  if(cost[edge.first] == -1)
            {
                s.insert({nodeCost+edge.second, edge.first});
            }
        }

        printf("Case #%d: ", t);
        if(cost[dest] == -1)    printf("unreachable\n");
        else                    printf("%d\n", cost[dest]);
    }
    return 0;
}



///Complexity: O((n+m)logn), similar to BFS but with an extra logn

///NOTES:
1- Take care of overflow
2- Take care of global variables if you have multiple test cases
3- Non-negative weights

4- One to many, One to one, Many to one
5- Many to many?

6- Build the path

7- Put the code in your library, but be ready to modify it!

vector<pii> Dijkstra(int src, const vector<vii> &edges)
{
    int N = edges.size();

    vi parent(N), cost(N, INF);
    vector<bool> expanded(N, false);

    parent[src] = src;
    cost[src] = 0;


    ///Queue pairs: (cost of a node, the node)
    priority_queue<pii, vii, greater<pii>> q;

    q.push(make_pair(0, src));

    while(!q.empty())
    {
        int node = q.top().second;
        q.pop();

        ///If this node has been expanded before.
        if(expanded[node])  continue;

        else    expanded[node] = true;

        for(int i = 0; i < (int)edges[node].size(); i++)
        {
            pii edge = edges[node][i];
            int neighbor = edge.first, EdgeCost = edge.second;

            if(cost[node] + EdgeCost < cost[neighbor])
            {
                parent[neighbor] = node;
                cost[neighbor] = cost[node] + EdgeCost;

                q.push(make_pair(cost[neighbor], neighbor));
            }
        }
    }

    vii result(N);
    for(int i = 0; i < N; i++)  result[i] = make_pair(cost[i], parent[i]);

    return result;
}
