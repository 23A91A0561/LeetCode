class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                int prsum;
                if(i==0)
                {
                    prsum=nums[j];
                }
                else
                {
                    prsum=nums[j]-nums[i-1];
                }
                if(j-i+1<=r && j-i+1>=l)
                {
                    if(prsum>0)
                    {
                        ans=min(ans,prsum);
                    }
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};