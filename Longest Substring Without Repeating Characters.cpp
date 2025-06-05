class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0;
        int start = 0;
        set<char> st;
        for (int i=0; i<s.length(); i++)
        {
            while (st.find(s[i]) != st.end())
            {
                st.erase(s[start]);
                start++;
            }
            st.insert(s[i]);
            maxlength = max(maxlength, i-start+1);
        }
        return maxlength;
    }
};
