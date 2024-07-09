class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        long long avg=0;
       int last=0;
        for(int i=0; i<customers.size(); i++){
            last=max(customers[i][0],last)+customers[i][1];
            avg+=last-customers[i][0];
        }
        
        return (static_cast<double>(avg))/customers.size();
    }
};