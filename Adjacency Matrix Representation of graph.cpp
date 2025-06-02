// adjacency matrix representation of undirected graph

#include <iostream>
#include<vector>
using namespace std;

void addEdge(vector<vector<int>>& G, int i, int j)
{
    G[i][j] = 1;
    G[j][i] = 1;
    return;
}

void printgraph(vector<vector<int>> G)
{
    for (int i=0; i<G.size(); i++)
    {
        for (int j=0; j<G[i].size(); j++)
            cout<<G[i][j]<<" ";
        cout<<"\n";
    }
    return;    
}

int main()
{
    int V = 4;
    
    vector<vector<int>> G(V, vector<int>(V,0));
    addEdge(G, 0, 1);
    addEdge(G, 1, 2);
    addEdge(G, 0, 2);
    addEdge(G, 1, 3);
    
    printgraph(G);
    
    
    return 0;
}