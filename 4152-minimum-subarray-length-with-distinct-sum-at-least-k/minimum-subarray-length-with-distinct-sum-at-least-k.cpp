class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int l=0;
        unordered_map<int,int>m;
        int ans=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                sum+=nums[i];
            }
            m[nums[i]]++;
            while(sum>=k)
            {
                ans=min(ans,i-l+1);
                m[nums[l]]--;
                if(m[nums[l]]==0)
                {
                    m.erase(nums[l]);
                    sum-=nums[l];
                }
                l++;
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};