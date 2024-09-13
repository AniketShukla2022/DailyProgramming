class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        double minAvg = INT_MAX;
        int i = 0;
        int j = 0;
        while(i != n/2)
        {
            double avg =(double) (nums[j]+nums[n-j-1])/2;
            if (avg < minAvg)
                minAvg = avg;
            j++;
            i++;
        }
        return (double)minAvg;
    }
};