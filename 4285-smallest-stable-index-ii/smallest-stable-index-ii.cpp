class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>low(n),high(n);
        low[n-1]=nums[n-1];
        high[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            high[i]=max(nums[i],high[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            low[i]=min(nums[i],low[i+1]);
        }
       
        for(int i=0;i<n;i++)
        {
            if(high[i]-low[i]<=k)
            {
                return i;
            }
        }
        return -1;
    }
};