class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
       sort(score.begin(),score.end(),[k](vector<int> &q, vector<int> &w){
            return q[k]> w[k];
        });

        return score; 
    }
};