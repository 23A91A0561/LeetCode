class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        set<int>s;
        for(auto &i:nums)
        {
            s.insert(i);
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-1==nums[i-1])
            {
                sum+=nums[i];
            }
            else
            {
                break;
            }
        }
        while(s.find(sum)!=s.end())
        {
            sum++;
        }
        return sum;
    }
};