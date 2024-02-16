class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
         std::map<int, int> mp;

    // Merge items from items1
    for (const auto& item : items1) {
        mp[item[0]] += item[1];
    }

    // Merge items from items2
    for (const auto& item : items2) {
        mp[item[0]] += item[1];
    }

    // Construct the result vector
    std::vector<std::vector<int>> result;
    for (const auto& pair : mp) {
        result.push_back({pair.first, pair.second});
    }

    return result;

        
    }
};