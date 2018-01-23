
///16 - Graph (BFS)

How to find the shortest path using BFS. (One to many)

vector<int> BFS(int src, const vector<vi> &edges) ///Call: vi distancesances = BFS(node, edges)
{
    int N = edges.size();
    vector<int> distancesances(N, -1);
    distancesances[src] = 0;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int node = q.front();   q.pop();
        int cost = distancesances[node];

        for(int child: edges[node])     if(distancesances[child]== -1)
        {
            q.push(child);
            distancesances[child] = cost+1;
        }
    }

    return distancesances;
}
//Nodes of other components will have a distancesance of -1.


///How to construct the paths

vector<vi> edges(MAXNODES);
vi distancesances(MAXNODES, -1);
vi p(MAXNODES);

void BFS(int src)
{
    distancesances[src] = 0;
    p[src] = src;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int node = q.front();   q.pop();
        int cost = distancesances[node];

        for(int child: edges[node])     if(distancesances[child]== -1)
        {
            p[child] = node;
            q.push(child);
            distancesances[child] = cost+1;
        }
    }
}

///For the graph in the picture, with src = 1.

distancesances = 0 , 1 , 2 , 2 , 1
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
int main()
{
    int n;  cin >> n;
    loop(n)
    {
        int j;  cin >> j;
        int u = i+j, v = i-j;

        if(u < n)   edges[u].PB(i);
        if(v >= 0)  edges[v].PB(i);
    }

    vi distancesances = BFS(n-1, edges);

    for(int i = 0; i < n; i++)  cout << distancesances[i] << " ";
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

///Complexity

