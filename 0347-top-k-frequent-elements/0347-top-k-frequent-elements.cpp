class Solution {
public:
   vector<int> topKFrequent(std::vector<int>& nums, int k) {
        // Step 1: Count the frequency of each element
        std::unordered_map<int, int> freq_map;
        for (int num : nums) {
            freq_map[num]++;
        }
        
        // Step 2: Use a priority queue (max-heap) to store pairs of <frequency, element>
        std::priority_queue<std::pair<int, int>> pq;
        for (auto& p : freq_map) {
            pq.push({p.second, p.first});
        }
        
        // Step 3: Extract the top k elements from the priority queue
        std::vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};