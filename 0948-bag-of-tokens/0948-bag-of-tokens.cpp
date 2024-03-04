class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        int maxscore=0;
        sort(tokens.begin(),tokens.end());
        int l=0;
        int r=tokens.size()-1;
        while(l<=r){
            if(power>=tokens[l]){
                power-=tokens[l];
                l++;
                score++;
                maxscore=max(maxscore,score);
            }
            else if(score>0){
                power+=tokens[r];
                r--;
                score--;
            }
            else{
                break;
            }
        }
        
        return maxscore;
    }
};