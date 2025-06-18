class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int carry = 0;
        for (int i=n-1; i>=0; i--)
        {
            int tempSum = digits[i] + carry;
            if (i==n-1)
                tempSum++;
            if (tempSum >= 10)
                carry = 1;
            else
                carry = 0;
            ans.push_back(tempSum%10);
        }
        if (carry != 0)
            ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
