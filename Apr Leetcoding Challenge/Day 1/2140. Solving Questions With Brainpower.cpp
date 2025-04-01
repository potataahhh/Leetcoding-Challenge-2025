class Solution {
public:

    long long temp(int i, vector<vector<int>>& questions,vector<long long>&dp){
        int n = questions.size();
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];

        long long taken = questions[i][0] + temp(i+questions[i][1]+1,questions,dp);
        long long not_taken = temp(i+1,questions,dp);

        return dp[i] = max(taken,not_taken);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long>dp(n+1,-1);
        return temp(0,questions,dp);
    }
};
