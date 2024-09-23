class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stack<char> pat;
        stack<string> st;

        for (int i=0; i<pattern.length(); i++)
        {
            pat.push(pattern[i]);
        }

        for (int i = 0; i < s.length(); ) 
        {
            // Find the start of the word
            while (i < s.length() && s[i] == ' ') {
                i++; // Skip spaces
            }
            
            // Now find the end of the word
            int j = i;
            while (j < s.length() && s[j] != ' ') {
                j++; // Move to the end of the word
            }
            
            // If we've found a word, push it to the stack
            if (i < j) {
                st.push(s.substr(i, j - i));
            }
            
            // Move to the next character after the word
            i = j;
        }
        unordered_map<char,string> mp;
        unordered_map<string, char> check;
        while (!pat.empty() && !st.empty())
        {
            if (mp.find(pat.top()) != mp.end())
            {
                if (mp[pat.top()] != st.top())
                    return false;
            }
            else
            {
                mp[pat.top()] = st.top();
                if (check.find(st.top()) != check.end())
                    return false;
                check[st.top()] = pat.top();
            }
            
            pat.pop();
            st.pop();
        }
        if (!pat.empty() || !st.empty())
            return false;
        return true;
    }
};