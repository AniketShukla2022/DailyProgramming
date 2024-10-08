class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1)
            return nums.size();
        int j = -1;
        for (int i=0; i<nums.size()-1; i++)
        {
            if (nums[i] != nums[i+1])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        j++;
        nums[j] = nums[nums.size()-1];
        return (j+1);
    }
};