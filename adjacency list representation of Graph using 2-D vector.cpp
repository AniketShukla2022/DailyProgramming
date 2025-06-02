//adjacency list representation of undirected graph

#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector<vector<int>>& G, int i, int j)
{
    G[i].push_back(j);
    G[j].push_back(i);
    return;
}

void printGraph(vector<vector<int>>& G)
{
    for (int i=0; i<G.size(); i++)
    {
        cout<<i<<" -> ";
        for (int j=0; j<G[i].size(); j++)
        {
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main()
{
    int V = 4;
    vector<vector<int>> G(V);
    
    addEdge(G, 0, 1);
    addEdge(G, 1, 3);
    addEdge(G, 0, 2);
    addEdge(G, 1, 2);
    
    printGraph(G);
    return 0;
}