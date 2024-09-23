class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int m = haystack.length();

        if (n>m)
            return -1;
        
        for (int i=0; i<=m-n; i++)
        {
            if (haystack[i] == needle[0])
            {
                int k = i;
                int flag = 0;   
                for (int j=0; j<n; j++)
                {
                    if (haystack[k] != needle[j])
                    {
                        flag = 1;
                        break;
                    }
                    k++;
                }
                if (flag == 0)
                    return i;
            }
        }
        return -1;
    }
};