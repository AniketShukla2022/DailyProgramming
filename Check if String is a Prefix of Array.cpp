class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int start = 0;
    int n = words.size();

    for (int i = 0; i < n; i++) {
        string temp = words[i];
        int l = temp.length();
        
        // Check if the substring of s starting from 'start' matches 'temp'
        if (start + l > s.length() || s.substr(start, l) != temp) {
            return false;
        }
        
        // Move the start index forward
        start += l;

        // If we've reached the end of s, it means s is a prefix
        if (start == s.length()) {
            return true;
        }
    }
    
    // If we exit the loop and haven't found a full match, return false
    return false;
    }
};