class Solution
{
    public:
     vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if (matrix.empty()) return ans;

    int top = 0, left = 0, right = matrix[0].size() - 1, down = matrix.size() - 1;

    int direction = 0;

    while (top <= down && left <= right) {
        if (direction == 0) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
        } else if (direction == 1) {
            for (int i = top; i <= down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
        } else if (direction == 2) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[down][i]);
            }
            down--;
        } else if (direction == 3) {
            for (int i = down; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    return ans;
}

};