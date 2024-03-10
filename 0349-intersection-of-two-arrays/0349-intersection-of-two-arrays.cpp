class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           unordered_set<int> array(nums1.begin(), nums1.end()), re;
        vector<int> ans;
        for (int num : nums2) {
            if (array.find(num) != array.end() && re.find(num) == re.end()) {
                ans.push_back(num);
                re.insert(num);
            }
        }
        return ans;
    }
};