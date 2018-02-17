
///16 - Graph (BFS)

How to find the shortest path using BFS. (One to many)

typedef vector<int> vi;

vi BFS(int src, const vector<vi> &edges) ///Call: vi distances = BFS(node, edges)
{
    int N = edges.size();
    vector<int> distances(N, -1);
    distances[src] = 0;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int node = q.front();   q.pop();
        int cost = distances[node];

        for(int child: edges[node])     if(distances[child]== -1)
        {
            q.push(child);
            distances[child] = cost+1;
        }
    }

    return distances;
}
//Nodes of other components (unreachable from the src node) will have distances of -1.


///How to construct the paths

vector<vi> edges(MAXNODES);
vi distances(MAXNODES, -1);
vi p(MAXNODES);

void BFS(int src)
{
    distances[src] = 0;
    p[src] = src;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int node = q.front();   q.pop();
        int cost = distances[node];

        for(int child: edges[node])     if(distances[child]== -1)
        {
            p[child] = node;
            q.push(child);
            distances[child] = cost+1;
        }
    }
}

///For the graph in the picture, with src = 1.

distances = 0 , 1 , 2 , 2 , 1
p         = 1 , 1 , 2 , 2 , 1


v.PB(dest);         ///3 2 1
int node = dest;
do
{
    node = p[node];
    v.PB(node);

}while(node != src);

reverse(v.begin(), v.end());


///ACM ECPC 2016 (Jumping) (Many to one).

#define endl '\n'	//Faster printing

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);	//Faster input (To avoid exceeding the time limit)
    
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<vi> edges(n);

        for(int i = 0; i < n; i++)
        {
            int j;  cin >> j;
            int u = i+j, v = i-j;

            if(u < n)   edges[u].push_back(i);
            if(v >= 0)  edges[v].push_back(i);
        }

        vi distances = BFS(n-1, edges);
        for(int i = 0; i < n; i++)  cout << distances[i] << endl;
    }

    return 0;
}


///Pacman

int main()
{
    pii src, goal;

    cin >> src.first >> src.second;
    cin >> goal.first >> goal.second;

    int n, m;           cin >> n >> m;
    char grid[n+9][m+9];   loop(n) cin >> grid[i];

    map<pii, int> distances;
    distances[src] = 0;

    int ans = -1;
    queue<pii> q;
    q.push(src);
    while(!q.empty())
    {
        pii pos = q.front();    q.pop();
        if(pos == goal)
        {
            ans = distances[pos];
            break;
        }

        int i = pos.first;
        int j = pos.second;
        if(i < 0 || i >= n || j < 0 || j >= m)  continue;
        if(grid[i][j] == '%')   continue;

        pii successors[] = {{i+1, j}, {i-1, j}, {i, j+1}, {i, j-1}};

        for(pii neighbor: successors)  if(distances.find(neighbor) == distances.end())
        {
            distances[neighbor] = distances[pos]+1;
            q.push(neighbor);
        }
    }

    cout << ans << endl;
    return 0;
}
//How to construct the path for this problem?

///Complexity?
