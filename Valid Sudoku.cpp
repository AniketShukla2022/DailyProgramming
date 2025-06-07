class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> st;
        for (int i=0; i<9; i++)
        {
            for (int j=0; j<9; j++)
            {
                char curr = board[i][j];
                if (curr != '.')
                {
                    string s = to_string(curr);
                    if (!st.insert(s + " found in row: " + to_string(i)).second ||
                    !st.insert(s + " found in column: " + to_string(j)).second ||
                    !st.insert(s + " found in grid: " + to_string(i/3) + "-" + to_string(j/3)).second)
                        return false;
                }
            }
        }
        return true;
    }
};
