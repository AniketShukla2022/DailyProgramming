class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;

        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == '(')
                open.push(i);
            else if (s[i] == '*')
                star.push(i);
            else
            {
                if (open.size() > 0)
                    open.pop();
                else if (star.size() > 0)
                    star.pop();
                else 
                    return false;
            }
        }
        while (!open.empty() && !star.empty())
        {
            if (open.top() > star.top())
                return false;
            open.pop();
            star.pop();
        }
        if (!open.empty())
            return false;
        return true;
    }
};
