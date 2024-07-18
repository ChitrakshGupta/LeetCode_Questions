class Solution {
public:
    int findTheWinner(int n, int k) {
        
        queue<int>q;
        for(int i=1; i<=n; i++){
            q.push(i);
        }
        int r=1;
        while(q.size()>1){
            if(r!=k)
            {
                int a=q.front();
                q.pop();
                q.push(a);
                r++;
            }
            else{
                 q.pop();
                r=1;
            }
            
        }
        
        return q.front();
    }
};