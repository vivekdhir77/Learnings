#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void printGraph(vector<pair<int, int>> adj[], int v)
{
    for (int i = 1; i < v; i++)
    {
        cout << (i) << " ";
        for (auto j : adj[i])
        {
            // cout<< j <<" ";
            cout << "{" << j.first << ", " << j.second << "} ";
        }
        cout << endl;
    }
}

// adjacency list for directed
void adjacency()
{
    vector<int> adj[6];

    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);

    // printGraph(adj, 5);
}

void adjDirected()
{
    vector<pair<int, int>> adj[6];

    adj[1].push_back({2, 5}); // {node, edge weight}
    adj[2].push_back({3, 7});
    adj[2].push_back({4, 6});
    adj[3].push_back({4, 5});
    adj[4].push_back({1, 2});

    printGraph(adj, 5);
}

void Adjmatrix()
{
    int adj[5][5] = {};
    adj[1][2] = 1;
    adj[2][3] = 1;
    adj[2][4] = 1;
    adj[3][4] = 1;
    adj[4][1] = 1;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

void bfs(int N, int x, vector<int> adj[])
{
    queue<int> q;
    bool visited[N];
    int distance[N];

    visited[x] = true;
    distance[x] = 0;
    q.push(x);

    while (!q.empty())
    {
        int s = q.front();
        q.pop();

        for (auto u : adj[s])
        {
            if (visited[u])
                continue;

            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }
}

void traverse(int u, bool visited[])
{                      // for adjacency matrix
    visited[u] = true; //mark v as visited
    for (int v = 0; v < NODE; v++)
    {
        if (graph[u][v])
        {
            if (!visited[v])
                traverse(v, visited);
        }
    }
}

void dfs(int s) // adjacency list
{
    if (visited[s])
        return;
    visited[s] = true;
    // process node s
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

int main()
{
    // adjacency();
    // adjDirected();
    Adjmatrix();
}