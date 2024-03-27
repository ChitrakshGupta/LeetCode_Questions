class Solution {
public:
int numSubarrayProductLessThanK(vector<int>& arr, int k) {
    int ans = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int prod = 1;

        for (int j = i; j < n; j++) {
            prod *= arr[j];

            if (prod < k) {
                // Increment ans only once for each valid subarray
                ans++;
            } else {
                // Break the inner loop if the product becomes greater than or equal to k
                break;
            }
        }
    }

    return ans;
}

};