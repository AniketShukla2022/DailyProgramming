//first solution

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        for (int i=0; i<=n; i++)
        {
            ans[i] = __builtin_popcount(i);
        }
        return ans;
    }
};


//second solution

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        for (int i=0; i<=n; i++)
        {
            int count = 0;
            int x = i;
            while (x)
            {
                if (x%2 != 0)
                {
                    count++;
                }
                x = x >> 1;
            }
            ans[i] = count;
        }
        return ans;
    }
};
