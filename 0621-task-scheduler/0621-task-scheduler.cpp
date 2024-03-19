class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
           int freq[26] = {0};
        for(char i : tasks){
            freq[i - 'A']++;
        }
        sort(begin(freq) , end(freq));
        int mk = freq[25] - 1;
        int ins = mk * n;

        for(int i=24; i>=0; i--){
            ins -= min(mk,freq[i]);
        }

        return ins < 0 ? tasks.size() : tasks.size() + ins;
    }
};