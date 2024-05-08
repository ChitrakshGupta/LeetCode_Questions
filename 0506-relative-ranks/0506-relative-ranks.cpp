class Solution {
public:
   vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> result(score.size());
    vector<int> sortedScore = score; // Create a copy for sorting
    sort(sortedScore.rbegin(), sortedScore.rend()); // Sort in descending order
    
    for(int i = 0; i < score.size(); i++) {
        int rank = distance(sortedScore.begin(), find(sortedScore.begin(), sortedScore.end(), score[i])) + 1;
        // distance calculates the index of the score in the sorted array + 1 gives the rank
        string rankStr;
        if (rank == 1) {
            rankStr = "Gold Medal";
        } else if (rank == 2) {
            rankStr = "Silver Medal";
        } else if (rank == 3) {
            rankStr = "Bronze Medal";
        } else {
            rankStr = to_string(rank);
        }
        result[i] = rankStr;
    }
    
    return result;
}

};