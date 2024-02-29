class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         // vector<int> ans;
  int n = nums.size();
    vector<int> ans(n, 1);

    // Compute product of all elements to the left of i
    int left_product = 1;
    for (int i = 0; i < n; ++i) {
        ans[i] *= left_product;
        left_product *= nums[i];
    }

    // Compute product of all elements to the right of i and multiply with ans[i]
    int right_product = 1;
    for (int i = n - 1; i >= 0; --i) {
        ans[i] *= right_product;
        right_product *= nums[i];
    }

    return ans;
        
        
    }
};