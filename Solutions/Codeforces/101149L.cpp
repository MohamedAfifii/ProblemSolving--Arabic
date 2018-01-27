#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

typedef vector<int> vi;


#define INF 100000000

///This function assumes that the nodes are numbered from 0 to N-1
///If the nodes are numbered from 1 to N, a small change has to be made.
vector<vi> FlipEdges(const vector<vi> &edges)
{
    int N = edges.size();

    vector <vi> NewEdges (N);

    for(int node = 0; node < N; node ++)
    {
        for(int i = 0; i < (int)edges[node].size(); i++)
        {
            int neighbor = edges[node][i];

            NewEdges[neighbor].push_back(node);
        }
    }

    return NewEdges;
}


/**
Returns a vector containing the shortest distances
from the src node to all the nodes in the (unweighted) graph.
*/
vector<int> BFS(int src, const vector<vi> &edges)
{
    int N = edges.size();
    vector<int> distances(N, INF);
    distances[src] = 0;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        int cost = distances[node];

        for(int i = 0; i < (int)edges[node].size(); i++)
        {
            int child = edges[node][i];

            ///If this node has been reached(visited) before.
            if(distances[child] != INF) continue;

            q.push(child);
            distances[child] = cost+1;
        }
    }

    return distances;
}


int main()
{
    //freopen("input2.txt", "r", stdin);

    int n,m,a,b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    vector<vi> edges (n+1);

    for(int i = 0; i < m; i++)
    {
        int x,y;
        scanf("%d %d", &x, &y);

        edges[x].push_back(y);
    }

    vi ShortestFrom0 = BFS(0, edges);

    edges = FlipEdges(edges);

    vi shortestToA = BFS(a, edges);
    vi shortestToB = BFS(b, edges);


    int best = INF;

    for(int i = 0; i <= n; i++)
    {
        best = min(best, ShortestFrom0[i] + shortestToA[i] + shortestToB[i]);
    }

    cout << best << endl;

    return 0;
}
