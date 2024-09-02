class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> TargetPair;
        unordered_map<int,int> mp;
        
        for (int i=0; i<nums.size(); i++) 
        {
            if (mp.find(target-nums[i])!=mp.end())
            {
                TargetPair.push_back(i);
                TargetPair.push_back(mp[target-nums[i]]);
                break;
            }
            mp.insert({nums[i],i});
        }
        return TargetPair;
    }
};