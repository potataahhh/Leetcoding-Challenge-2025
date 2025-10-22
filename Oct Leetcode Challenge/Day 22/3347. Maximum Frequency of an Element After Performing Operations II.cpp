class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numop) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int maxfreq = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            maxfreq = max(maxfreq,mp[nums[i]]);
        }
        if(numop >0)
        {
            sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++)
            {
                // 1st case
                int s = lower_bound(nums.begin(),nums.end(),nums[i]-k)-nums.begin();
                int e = upper_bound(nums.begin(),nums.end(),1LL*nums[i]+k)-nums.begin();
                maxfreq = max(maxfreq,min(mp[nums[i]]+numop,e-s));
                // 2nd case
                int l = lower_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
                int r = upper_bound(nums.begin(),nums.end(),1LL*nums[i]+2*k)-nums.begin();
                maxfreq = max(maxfreq,min(numop,r-l));
            }
        } 
        return maxfreq;
    }
};
