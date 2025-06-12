class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,pair<int,int>> , vector<pair<double,pair<int,int>>>, greater<pair<double,pair<int, int>>> > pq;
        
        for (int i=0; i<points.size(); i++)
        {
            double dis = sqrt(points[i][0] * points[i][0] + points[i][1] * points[i][1]);
            pq.push({dis, {points[i][0], points[i][1]}});
        }

        vector<vector<int>> ans;

        while (k)
        {
            int xTop = pq.top().second.first;
            int yTop = pq.top().second.second;
            ans.push_back({xTop, yTop});
            pq.pop();
            k--;
        }
        return ans;
    }
};
