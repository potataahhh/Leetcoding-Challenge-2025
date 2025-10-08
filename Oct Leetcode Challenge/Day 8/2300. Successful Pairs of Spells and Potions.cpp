class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       sort(potions.begin(),potions.end());
       vector<int>res;
       for(int temp:spells){

           // getting the threshold
           
        long point = ceil((double)success/temp);

           // Binary search using lower_bound
           
        auto it = lower_bound(potions.begin(),potions.end(),point);
        res.push_back(potions.end()-it);
       }
       return res;
    }
};



========================================================================================

// Instead of ceil we can also use 

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>res;
        for(int temp:spells){
            long point=(success+temp-1)/temp;
            auto it = lower_bound(potions.begin(),potions.end(),point);
            res.push_back(potions.end()-it);    
        }
        return res;
    }
};


