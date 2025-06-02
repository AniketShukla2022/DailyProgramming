//adjacency list representation of undirected graph

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void addEdge(unordered_map<int, vector<int>>& G, int i, int j)
{
    G[i].push_back(j);
    G[j].push_back(i);
    return;
}

void printGraph(unordered_map<int, vector<int>>& G)
{
    for (auto i:G)
    {
        cout<<i.first<<" -> ";
        for (int j = 0; j < i.second.size(); j++)
        {
            cout<<i.second[j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main()
{
    int V = 4;
    unordered_map<int, vector<int>> G;
    addEdge(G, 0, 1);
    addEdge(G, 1, 3);
    addEdge(G, 0, 2);
    addEdge(G, 1, 2);
    
    printGraph(G);
    return 0;
}