class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if (n<2)
            return true;
        for (int i=0; i<n; i++)
        {
            if (s[i]>='A' && s[i]<='Z')
                s[i] = tolower(s[i]);
        }
        int i=0;
        int j=n-1;
        while(i<j)
        {
            while (!isalnum(s[i]) && i<j)
                i++;
            while (!isalnum(s[j]) && j>i)
                j--;
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
