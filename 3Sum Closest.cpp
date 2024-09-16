class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int closestSum = INT_MAX/2;
        for (int i=0; i<n-2; i++)
        {
            int left = i+1, right = n-1;
            while (left<right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                    return sum;
                if (abs(target-sum) < abs(closestSum-target))
                    closestSum = sum;
                if (sum < target)
                {
                    left++;
                }
                else 
                {
                    right--;
                }
            }
        }
        return closestSum;
    }
};