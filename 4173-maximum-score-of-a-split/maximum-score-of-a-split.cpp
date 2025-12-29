class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        vector<long long>prefix(nums.size());
        vector<int>suffix(nums.size());
        int n=nums.size();
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=nums[i]+prefix[i-1];
        }
        suffix[n-1]=nums[n-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        suffix[0]=suffix[1];
        long long ans=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            ans=max(prefix[i]-suffix[i+1],ans);
        }
        return ans;
    }
};