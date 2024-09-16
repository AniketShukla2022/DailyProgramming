class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;

        int max_water = INT_MIN;
        while (left < right)
        {
            max_water = max(max_water, (right-left)*min(height[left],height[right]));
            if (height[left] > height[right])
                right--;
            else 
                left++;
        }
        return max_water;
    }
};