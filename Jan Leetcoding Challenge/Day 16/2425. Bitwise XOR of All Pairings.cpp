class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int res=0;

        if(m%2!=0)
        {
            for(int i=0;i<n;i++)
             res^=nums1[i];
        }
        if(n%2!=0)
        {
            for(int j=0;j<m;j++)
             res^=nums2[j];
        }
        return res;
    }
};
