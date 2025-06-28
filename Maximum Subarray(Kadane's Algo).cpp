class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSumSoFar = INT_MIN;
        int currSum = 0;
        for (int i=0; i<nums.size(); i++)
        {
            currSum += nums[i];
            if (currSum > maxSumSoFar)
            {
                maxSumSoFar = currSum;
            }
            if (currSum < 0)
                currSum = 0;
        }
        return maxSumSoFar;
    }
};
