// O(n*log(n))

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        sort(nums.begin(), nums.end());  // nlogn
        int count = 1;
        int res=1;
        for (int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                continue;
            else if(nums[i] + 1 == nums[i+1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            res = max(res, count);
        }
        return res;
    }
};


//O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (int ele : st)
        {
            if (st.find(ele-1) == st.end())
            {
                int length = 1;
                while (st.find(ele+length) != st.end())
                {
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};
