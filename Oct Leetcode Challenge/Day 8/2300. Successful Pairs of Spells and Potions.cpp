class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       sort(potions.begin(),potions.end());
       vector<int>res;
       for(int temp:spells){
        long point = ceil((double)success/temp);
        auto it = lower_bound(potions.begin(),potions.end(),point);
        res.push_back(potions.end()-it);
       }
       return res;
    }
};
