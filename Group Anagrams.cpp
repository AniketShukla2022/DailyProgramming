class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>> temp;
        map<vector<int>, vector<string>> mp;
        for (int i=0; i<strs.size(); i++)
        {
            vector<int> temp1(26,0);
            for (char c:strs[i])
            {
                temp1[c-'a']++;
            }
            mp[temp1].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        for(const auto& itr : mp)  
            ans.push_back(itr.second);
        return ans;
    }
};
