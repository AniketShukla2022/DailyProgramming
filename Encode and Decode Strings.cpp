class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded = "";
        for (string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        cout<<encoded<<endl;
        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while (i < s.size()) {
            int j = i;
            // Find the position of the delimiter
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i)); // get the length
            decoded.push_back(s.substr(j + 1, len)); // extract string
            i = j + 1 + len;
        }

        return decoded;
    }
};
