class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long hound=0;
        int n=nums.size();
        for(int i=0;i<min(n,k);i++)
        {
            if(mul!=0)
            {
                hound+=(1LL*mul*nums[i]);
                mul--;
            }
            else
            {
                hound+=nums[i];
            }
        }
        return hound;
    }
};