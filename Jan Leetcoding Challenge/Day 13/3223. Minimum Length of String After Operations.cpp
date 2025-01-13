class Solution {
public:
    int minimumLength(string s) {
        vector<int>v(26,0);
        int res=0;

        for(char &ch:s){
            v[ch-'a']++;
        }

        for(int i=0;i<26;i++){
            if(v[i]==0) continue;

            if(v[i]%2==0){
                res+=2;
            }
            else{
                res++;
            }
        }
        return res;
    }
};
