class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i =0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        unordered_map<int, int>::iterator itr;
        for(itr = mp.begin(); itr!=mp.end(); itr++)
        {
            pq.push(make_pair(itr->second, itr->first)); 
        }
        vector<int> ans;
        for (int i=0; i<k; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
