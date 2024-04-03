class Solution {
public:
  
bool backtrack(vector<vector<char>>& board, string& word, int index, int i, int j) {
    if (index == word.length()) {
        return true; // Base case: the entire word is found
    }

    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) {
        return false; // Out of bounds or mismatch, backtrack
    }

    char temp = board[i][j];
    board[i][j] = ' '; // Mark as visited

    // Check adjacent cells
    bool found = backtrack(board, word, index + 1, i + 1, j) ||
                 backtrack(board, word, index + 1, i - 1, j) ||
                 backtrack(board, word, index + 1, i, j + 1) ||
                 backtrack(board, word, index + 1, i, j - 1);

    board[i][j] = temp; // Restore the cell
    return found;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (board[i][j] == word[0] && backtrack(board, word, 0, i, j)) {
                return true;
            }
        }
    }
    return false;
}

};