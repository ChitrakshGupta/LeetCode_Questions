class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        
        queue<int>q;
        vector <int> ans(deck.size());
        //put all element in queue
        for(int i=0; i<deck.size(); i++){
            q.push(i);
        }
        // reverse simulation and filling using sorted deck
        for(int i:deck){
            //reveal
            ans[q.front()]=i;
            q.pop();
            //push front to bottom
            if(!q.empty()){
                auto f =q.front();
                
                q.pop();
                q.push(f);
                
            }
            
        }
        
        return ans;
    }
};