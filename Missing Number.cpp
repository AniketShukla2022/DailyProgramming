//first solution -> maths

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = (n*(n+1))/2;
        int realSum = 0;
        for (int i=0; i<n; i++)
            realSum += nums[i];
    
        return actualSum-realSum;
    }
};


// Second Solution -> using XOR (a^a = 0, a^0 = a)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualRes = 0;
        int currentRes = 0;
        
        for (int i=0; i<=n; i++)
            actualRes = actualRes ^ i;
        
        for (int i=0; i<n; i++)
            currentRes = currentRes ^ nums[i];

        return actualRes ^ currentRes;
    }
};
