class Solution {
public:

    bool isValid(vector<int> &w2,vector<int> &mp){
        for(int i=0;i<26;i++){
            if(mp[i]<w2[i]){
                return false;
            }
        }
        return true;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>res;
        vector<int>w2(26);

        for(auto &word:words2){
            vector<int>mp(26,0);

            for(char &ch:word){
                mp[ch-'a']++;
                w2[ch-'a'] = max(w2[ch-'a'],mp[ch-'a']);
            }
        }

        for(auto &word:words1){
            vector<int>mp(26,0);

            for(char &ch:word){
                mp[ch-'a']++;
            }

        if(isValid(w2,mp)==true){
            res.push_back(word);
            }
        }
        return res;
    }
};
