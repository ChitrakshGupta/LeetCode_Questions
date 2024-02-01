class Solution {
public:
    string categorizeBox(int l, int b, int h, int m) {
        int ans1 = 0, ans2 = 0;
        if(l >= 10000 || b >= 10000 || h >= 10000 || (long long)l * b * h >= 1e9)  ans1 = 1;
        if(m>= 100) ans2 = 1;
        
        if(ans1 && ans2) return "Both";
        if(!ans1 && !ans2) return "Neither";
        if(ans1 && !ans2) return "Bulky";
        else return "Heavy";
    }
};