//using visited boolean matrix

class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j)
    {
        if (i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == '0' || visited[i][j])
            return;
        visited[i][j] = true;
        dfs(grid, visited, i+1, j);
        dfs(grid, visited, i, j+1);
        dfs(grid, visited, i-1, j);
        dfs(grid, visited, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int count = 0;
        for (int i=0; i<grid.size(); i++)
        {
            for (int j=0; j<grid[i].size(); j++)
            {
                if (grid[i][j] == '1' && !visited[i][j])
                {
                    dfs(grid, visited, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};

//without boolean matrix, modifying the original matrix itself

class Solution {
public:
    void dfs(vector<vector<char>>& grid, /*vector<vector<bool>>& visited,*/ int i, int j)
    {
        if (i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == '0' /*|| visited[i][j]*/)
            return;
        //visited[i][j] = true;
        grid[i][j] = '0';
        dfs(grid, /*visited,*/ i+1, j);
        dfs(grid, /*visited,*/ i, j+1);
        dfs(grid, /*visited,*/ i-1, j);
        dfs(grid, /*visited,*/ i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        //vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int count = 0;
        for (int i=0; i<grid.size(); i++)
        {
            for (int j=0; j<grid[i].size(); j++)
            {
                if (grid[i][j] == '1'/* && !visited[i][j]*/)
                {
                    dfs(grid, /*visited,*/ i, j);
                    count++;
                }
            }
        }
        return count;
    }
};


