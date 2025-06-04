class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int l = 0, r = ROWS * COLS - 1 ;
        while (l <= r)
        {
            int m = l + (r-l)/2;
            int row = m/COLS, col = m%COLS;
            if (matrix[row][col] < target)
                l = m + 1;
            else if (matrix[row][col] > target)
                r = m - 1;
            else
                return true;
        }
        return false;
    }
};