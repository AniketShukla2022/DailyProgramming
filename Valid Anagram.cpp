class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();

        if (n1 != n2)
            return false;
        
        int arr1[26] = {0};
        int arr2[26] = {0};

        for (int i=0; i<n1; i++)
        {
            arr1[s[i]-'a']++;
        }
        for (int i=0; i<n2; i++)
        {
            arr2[t[i]-'a']++;
        }

        for (int i=0; i<26; i++)
        {
            if (arr1[i] != arr2[i])
                return false;
        }
        return true;
    }
};
