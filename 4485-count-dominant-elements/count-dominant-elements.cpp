class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        if(nums.size()==1)
        {
            return 1;
        }
        if(nums[0]>=nums[1])
        {
            ans++;
        }
        if(nums[n-1]>=nums[n-2])
        {
            ans++;
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            if((nums[i-1]+nums[i+1]*1.0)/2<=nums[i])
            {
                ans++;
            }
        }
        return ans;
    }
};