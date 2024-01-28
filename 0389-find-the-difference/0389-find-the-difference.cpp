class Solution {
public:
    char findTheDifference(string s, string t) {
        char a=0;
        for(auto it: s){
            a^=it;
        }
         for(auto it: t){
            a^=it;
        }
        return a;
    }
};