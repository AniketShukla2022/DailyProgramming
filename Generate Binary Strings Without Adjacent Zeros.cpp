class Solution {
public:
    void help(int i, int n, vector<string>& ans, char prev, string temp)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return;
        }
        if (prev == '1')
        {
            temp += '0';
            help(i+1, n, ans, '0', temp);
            temp.pop_back();
            
            temp += '1';
            help(i+1, n, ans, '1', temp);
            temp.pop_back();
        }
        else
        {
            temp += '1';
            help(i+1, n, ans, '1', temp);
            temp.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string temp = "";

        help(0, n, ans, '1', temp);
        return ans;
    }
};