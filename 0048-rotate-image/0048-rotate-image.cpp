class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int k =matrix.size();
                for(int i=0;i<matrix.size()/2;i++)
        {
            for(int j=i;j<k-i-1;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[k-j-1][i];
                matrix[k-j-1][i]=matrix[k-i-1][k-j-1];
                matrix[k-i-1][k-j-1]=matrix[j][k-i-1];
                matrix[j][k-i-1]=temp;
            }
        }

    }
};