#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>

using namespace std;


vector<int> BFS(int src, const vector<vector<int>> &edges)
{
    int N = edges.size();
    vector<int> distances(N, -1);
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
            if(distances[child] != -1) continue;

            q.push(child);
            distances[child] = cost+1;
        }
    }

    return distances;
}

int main()
{
    freopen("jumping.in", "r", stdin);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        vector<vector<int>> edges(N);


        ///Number the nodes from 0 to N-1
        for(int i = 0; i < N; i++)
        {
            int d;
            scanf("%d", &d);

            ///The edges are reversed
            if(i + d < N)   edges[i+d].push_back(i);
            if(i - d >= 0)  edges[i-d].push_back(i);
        }


        vector<int> distances = BFS(N-1, edges);

        for(int i = 0; i < N; i++)
        {
            printf("%d\n",distances[i]);
        }
    }
    return 0;
}
