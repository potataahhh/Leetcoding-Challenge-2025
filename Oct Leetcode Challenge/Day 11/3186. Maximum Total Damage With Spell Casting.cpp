class Solution {
public:
    vector<long long> dp;
    long long solve(int i, vector<int>& power) {
        if (i == power.size()) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        long long j = i + 1, k = i + 1;

        while (j < power.size() && power[j] <= power[i] + 2)
            j++;

        while (k < power.size() && power[k] == power[i])
            k++;

        long long take = 0, not_take = 0;
        take = (k - i) * power[i] + solve(j, power);
        not_take = solve(k, power);
        return dp[i] = max(take, not_take);
    }
    
    long long maximumTotalDamage(vector<int>& power) {
        sort(power.begin(), power.end());
        dp.assign(power.size(), -1);
        return solve(0, power);
    }
};
