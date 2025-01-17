class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int count = 0;
        int n = derived.size();
        for(int i = 0; i < n; i++){
            count += derived[i];
        }
        return count % 2 == 0;
    }
};
