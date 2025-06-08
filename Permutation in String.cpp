//O(N)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> alp1(26,0);
        vector<int> alp2(26,0);
        int m = s1.length();
        int n = s2.length();

        if (m > n)
            return false;
        for (int i=0; i<m; i++)
        {
            alp1[s1[i]-'a']++;
        }
        for (int i=0; i<m; i++)
        {
            alp2[s2[i]-'a']++;
        }
        if (alp1 == alp2)
            return true;
        int start = 0;
        for (int i=m; i<n; i++)
        {
            alp2[s2[i]-'a']++;
            alp2[s2[start]-'a']--;
            start++;
            if (alp1 == alp2)
                return true;
        }
        return false;
    }
};





//O(N^2)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> alp(26,0);
        int m = s1.length();
        int n = s2.length();

        if (m > n)
            return false;
        for (int i=0; i<m; i++)
        {
            alp[s1[i]-'a']++;
        }
        
        for (int i=0; i<n; i++)
        {
            int curr;
            if (alp[s2[i]-'a'] > 0)
            {
                vector<int> temp = alp;
                curr = i;
                int k = m;
                while (k)
                {
                    if (temp[s2[curr]-'a'] > 0)
                    {
                        temp[s2[curr]-'a']--;
                        curr++;
                        k--;
                    }
                    else
                        break;
                }
                if (k==0)
                {
                    int flag = 0;
                    for (int i=0; i<26; i++)
                    {
                        if (temp[i] != 0)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                        return true;
                }
            }
        }
        return false;
    }
};
