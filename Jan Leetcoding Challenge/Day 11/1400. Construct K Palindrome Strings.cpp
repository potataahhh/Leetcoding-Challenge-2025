class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k)return false;
        unordered_map<char, int> freq;
        for(auto c: s){
            freq[c]++;
        }

        int cnt = 0;
        for(auto val : freq){
            if(val.second%2)cnt++;
        }
        return cnt<=k;        




