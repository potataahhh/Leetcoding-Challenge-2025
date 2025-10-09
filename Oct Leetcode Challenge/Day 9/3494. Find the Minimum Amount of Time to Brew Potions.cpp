class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size(), m = mana.size();

        // res vector
        vector<long long> done(n + 1, 0);
        
        for (int j = 0; j < m; ++j) {

            //loop to move forward and add time  to perform actions
            for (int i = 0; i < n; ++i) {
                done[i + 1] = max(done[i + 1], done[i]) + 1LL * mana[j] * skill[i];
            }

            //loop to move backward and subtracting time for resuing purpose of next iteration
            for (int i = n - 1; i > 0; --i) {
                done[i] = done[i + 1] - 1LL * mana[j] * skill[i];
            }
        }
        
        return done[n];
    }
};
