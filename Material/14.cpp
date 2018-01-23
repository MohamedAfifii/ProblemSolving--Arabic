
///14- Graph (Representation)

- Adjacency list vs Adjacency matrix.


///Using recursion
#define MAXNODES 100000+9
#define PB push_back
typedef vector<int> vi;
vector<vi> edges(MAXNODES);
bool visited[MAXNODES];

void dfs(int node)
{
	visited[node] = true;
	for(int neighbor: edges[node])	if(!visited[neighbor])
	{
		dfs(neighbor);
	}
}

int main()
{
	int n, m;	cin >> n >> m;
	
	while(m--)
	{
		int u, v;	cin >> u >> v;
		edges[u].PB(v);
		edges[v].PB(u);
	}
	
	int ans = 0;
	for(int node = 1; node <= n; node++)
	{
		if(!visited[node])
		{
			ans++;
			dfs(node);
		}
	}
	
	cout << ans << endl;
	return 0;
}

