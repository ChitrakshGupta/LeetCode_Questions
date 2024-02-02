class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // isme priorty queue use r rhe he jo insert normal hota he fir max return krta h
        // create pq
         priority_queue<int> pq;
        
        // k-1 elemint nikalo
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        
        for(int i =1; i<k; i++){
            pq.pop();
        }
        // kth element is answer
        return pq.top();
    
        
    }
};