//BFS of undirected graph

#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>

using namespace std;

void addEdge(unordered_map<int, vector<int>>& G, int i, int j)
{
    G[i].push_back(j);
    G[j].push_back(i);
    
    return;
}

vector<int> bfs(unordered_map<int, vector<int>>& G)
{
    vector<int> isVisited(G.size(), 0);
    vector<int> ans;
    queue<int> q;
    
    //assuming bfs traversal starts from 0
    isVisited[0] = 1;
    q.push(0);
    
    while (!q.empty())
    {
        int top = q.front();
        ans.push_back(top);
        q.pop();
        for(int j=0; j<G[top].size(); j++)
        {
            if (!isVisited[G[top][j]])
            {
                isVisited[G[top][j]] = 1;
                q.push(G[top][j]);
            }
        }
    }
    return ans;
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

void printbfs(vector<int>& bfsTraversal)
{
    for (int i=0; i<bfsTraversal.size(); i++)
        cout<<bfsTraversal[i]<<" ";
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
    
    vector<int> bfsTraversal = bfs(G);
    cout<<"BFS traversal of graph G is:"<<endl;;
    printbfs(bfsTraversal);
    return 0;
}