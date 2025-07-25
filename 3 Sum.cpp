class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i=0; i<n-2; i++)
        {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            int start = i+1;
            int end = n-1;
            while (start < end)
            {
                if (nums[start] + nums[end] == (-1) * nums[i])
                {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                    while (start < end && nums[start] == nums[start-1])
                        start++;
                }
                else if (nums[start] + nums[end] > (-1) * nums[i])
                    end--;
                else
                    start++;
            }
        }
        return ans;
    }
};
