class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int>n=(nums);
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=i-n[i];
            if(temp>0)
            {
                sum+=nums[i]-nums[temp-1];
            }
            else
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};