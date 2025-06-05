class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxWater = 0;
        int i = 0;
        int j = n-1;

        while (i<j)
        {
            maxWater = max(maxWater, (j-i)*min(heights[j], heights[i]));
            if (heights[j] > heights[i])
                i++;
            else
                j--;
        }
        return maxWater;
    }
};
