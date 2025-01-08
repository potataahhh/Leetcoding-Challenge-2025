class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int n = words[i].size();
                int m = words[j].size();
                
                if (n <= m){
                    if(words[j].substr(0, n) == words[i] && words[j].substr(m-n) == words[i])
                        ++count;
                }
            }
        }
        return count;
    }
};
