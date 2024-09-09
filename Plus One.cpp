class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> answer;
        int temp = 0;
        int carry = 0;

        for (int i=n-1; i>=0; i--)
        {
            if (i==n-1)
            {
                temp = digits[i] + 1;
            }
            else 
            {
                temp = digits[i] + carry;
            }
            answer.push_back(temp%10);
            carry = temp / 10;
        }
        if (carry != 0)
            answer.push_back(carry);
        reverse(answer.begin(),answer.end());
        return answer;
    }
};