class Solution {
public:
    string nearestPalindromic(string n) {
    int len = n.size();
    if (len == 1) {
        return to_string(stoi(n) - 1);
    }

    vector<long long> candidates;
    candidates.push_back((long long)pow(10, len) + 1);    // 100..001
    candidates.push_back((long long)pow(10, len - 1) - 1); // 999..999
    
    long long prefix = stoll(n.substr(0, (len + 1) / 2));
    
    for (int i = -1; i <= 1; ++i) {
        string p = to_string(prefix + i);
        string palin = p + string(p.rbegin() + (len & 1), p.rend());
        candidates.push_back(stoll(palin));
    }
    
    long long num = stoll(n), res = -1;
    for (long long cand : candidates) {
        if (cand != num) {
            if (res == -1 || abs(cand - num) < abs(res - num) ||
                (abs(cand - num) == abs(res - num) && cand < res)) {
                res = cand;
            }
        }
    }
    
    return to_string(res);
}

};