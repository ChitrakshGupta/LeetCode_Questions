class Solution {
public:
    
   int orangesRotting(vector<vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return 0;
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Up, Down, Left, Right
    queue<pair<int, int>> q;
    int freshOranges = 0;
    
    // Step 1: Add all rotten oranges to the queue and count fresh oranges
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 2) {
                q.push({i, j});
            } else if (matrix[i][j] == 1) {
                freshOranges++;
            }
        }
    }
    
    if (freshOranges == 0) return 0; // All oranges are already rotten
    
    int minutes = 0;
    
    // Step 2: Perform BFS
    while (!q.empty()) {
        int size = q.size();
        bool rotted = false;
        
        for (int i = 0; i < size; ++i) {
            auto [x, y] = q.front();
            q.pop();
            
            for (auto [dx, dy] : directions) {
                int newX = x + dx;
                int newY = y + dy;
                
                if (newX >= 0 && newX < rows && newY >= 0 && newY < cols && matrix[newX][newY] == 1) {
                    matrix[newX][newY] = 2;
                    q.push({newX, newY});
                    freshOranges--;
                    rotted = true;
                }
            }
        }
        
        if (rotted) {
            minutes++;
        }
    }
    
    return freshOranges == 0 ? minutes : -1;
}

};