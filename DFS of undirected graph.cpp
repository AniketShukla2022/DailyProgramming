//DFS of undirected graph

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

void dfsrecur(unordered_map<int, vector<int>>& G, vector<int>& res, int node, vector<int>& isVisited)
{
    isVisited[node] = 1;
    res.push_back(node);
    for (auto i:G)
    {
        if (!isVisited[i.first])
            dfsrecur(G, res, i.first, isVisited);
    }
}

vector<int> dfs(unordered_map<int, vector<int>>& G)
{
    vector<int> isVisited(G.size(), 0);
    vector<int> res;
    dfsrecur(G, res, 0, isVisited);
    return res;
}

void printGraph(unordered_map<int, vector<int>>& G)
{
    for (auto i:G)
    {
        cout<<i.first<<" -> ";
        for (int j=0; j<i.second.size(); j++)
        {
            cout<<i.second[j]<<" ";
        }
        cout<<endl;
    }
    return;
}

void printdfs(vector<int>& dfsTraversal)
{
    for (int i=0; i<dfsTraversal.size(); i++)
        cout<<dfsTraversal[i]<<" ";
    return;
}

int main()
{
    int V = 4;
    unordered_map<int, vector<int>> G(V);
    addEdge(G, 0, 3);
    addEdge(G, 2, 3);
    addEdge(G, 0, 1);
    addEdge(G, 1, 2);
    
    printGraph(G);
    
    vector<int> dfsTraversal = dfs(G);
    cout<<"DFS traversal of graph G is:"<<endl;;
    printdfs(dfsTraversal);
    return 0;
}