class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> mp;
        for (int i=0; i<n ; i++)
        {
            if (mp.find(target-nums[i]) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            mp.insert({nums[i],i});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
