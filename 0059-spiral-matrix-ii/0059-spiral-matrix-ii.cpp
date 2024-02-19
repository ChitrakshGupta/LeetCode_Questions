class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
           vector<vector<int>> ans(n, vector<int>(n));
        
        
            int top = 0, left = 0, right = n-1, down = n-1;

            int direction = 0;
        int num=1;

           	// 0 L ->r
           	// 1 t ->d
           	//2 r->l
           	// 3 d->t
            while (top <= down && left <= right)
            {
                if (direction == 0)
                {
                    for (int i = left; i <= right; i++)
                    {
                        ans[top][i]=num;
                          num++;
                    }
                   
                    top++;
                }
                else if (direction == 1)
                {
                    for (int i = top; i <= down; i++)
                    {
                        ans[i][right]=num;
                          num++;
                    }
                    right--;
                }
                else if (direction == 2)
                {
                    for (int i = right; i >= left; i--)
                    {
                        ans[down][i]=num;
                          num++;
                    }
                   
                    down--;
                }
                else if(direction ==3)
                {

                   	//down same
                    for (int i = down; i >=top; i--)
                    {
                        ans[i][left]=num;
                          num++;
                    }
                    left++;

                }
              
                direction=(direction+1)%4;
            }

            return ans;
    }
};