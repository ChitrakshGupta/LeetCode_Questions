class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& x, const vector<int>& y) {
    return x[1] < y[1];
});

int numArrows = 1;
int previousEnd = points[0][1];

// Count the number of non-overlapping intervals
for (int i = 1; i < points.size(); ++i) {
    if (points[i][0] > previousEnd) {
        numArrows++;
        previousEnd = points[i][1];
    }
}

return numArrows;

    }
};