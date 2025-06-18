class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while (1)
        {
            int sum = 0;
            while (n)
            {
                int temp = n%10;
                sum += (temp*temp);
                n /= 10;
            }
            if (sum == 1)
                return true;
            if (st.find(sum) != st.end())
                return false;
            st.insert(sum);
            n = sum;
        }
        return false;
    }
};
