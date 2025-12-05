class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]-(nums[n]-nums[i]))%2==0)
            {
                c++;
            }
        }
        return c;
    }
};