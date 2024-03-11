class Solution {
public:
    string customSortString(string order, string s) {
         sort(s.begin(), s.end(), [order](char q, char w) { 
            return order.find(q) < order.find(w);
        });
    return s;
    }
};