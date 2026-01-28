class Solution {
public:
    int check(vector<int>& nums,int k)
    {
        int l=0;
        map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            while(m.size()>k)
            {
                m[nums[l]]--;
                if(m[nums[l]]==0)
                {
                    m.erase(nums[l]);
                }
                l++;
            }
            ans+=i-l+1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return check(nums,k)-check(nums,k-1);
    }
};