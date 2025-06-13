class Solution {
public:
    void backtrack(int open, int close, int n, vector<string>& s, string& st)
    {
        if (open == close && open == n)
        {
            s.push_back(st);
            return;
        }
        if (open < n)
        {
            st += '(';
            backtrack(open+1, close, n, s, st);
            st.pop_back();
        }
        if (close < open)
        {
            st += ')';
            backtrack(open, close+1, n, s, st);
            st.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        string st;
        backtrack(0, 0, n, s, st);
        return s;
    }
};
