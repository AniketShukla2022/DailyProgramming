/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    map<Node*, Node*> m;
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return nullptr;
        if (m.find(node) != m.end())
            return m[node];
        Node* curr = new Node(node->val);
        m[node] = curr;
        for (auto i:node->neighbors)
        {
            curr->neighbors.push_back(cloneGraph(i));
        }
        return curr;
    }
};
