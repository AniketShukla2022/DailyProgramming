class Solution {
public:
    int INF = INT_MAX;
    vector<vector<int>> directions = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
    int bfs(vector<vector<int>>& grid, int i, int j)
    {
        vector<vector<bool>> visit(grid.size(), vector<bool>(grid[0].size(), false));
        queue<pair<int, int>> q;
        q.push({ i,j });
        visit[i][j] = true;
        int steps = 0;

        while (!q.empty())
        {
            int size = q.size();
            for (int s = 0; s < size; s++)
            {
                int rTop = q.front().first;
                int cTop = q.front().second;

                q.pop();

                if (grid[rTop][cTop] == 0)
                    return steps;

                for (int i = 0; i < 4; i++)
                {
                    int row = rTop + directions[i][0];
                    int col = cTop + directions[i][1];
                    if (row >= 0 && col >= 0 && row < grid.size() && col < grid[0].size()
                        && grid[row][col] != -1 && !visit[row][col])
                    {
                        visit[row][col] = true;
                        q.push({ row, col });
                    }
                }
            }

            steps++;
        }
        return INF;
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == INF)
                    grid[i][j] = bfs(grid, i, j);
            }
        }
    }
};