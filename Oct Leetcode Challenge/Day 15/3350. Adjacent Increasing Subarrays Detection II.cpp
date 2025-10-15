class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int res=0,i,n=nums.size(),k,prev_arr=1,curr=1;

        for(i=1;i<n;i++){
            if(nums[i]>nums[i-1])
                curr++;
            else {
               res=max(res,min(prev_arr,curr));
               res=max(res,max(prev_arr/2,curr/2));
               prev_arr=curr;
               curr=1;
            }
        }
        res=max(res,min(prev_arr,curr));
        res=max(res,max(prev_arr/2,curr/2));
        return res;
    }
};
