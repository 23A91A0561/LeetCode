class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int Min=nums[i];
            int And=nums[i];
            for(int j=i;j<nums.size();j++)
            {
                And&=nums[j];
                Min=min(Min,nums[j]);
                if(And==Min)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};