class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int Min=INT_MAX;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]==1 && nums[j]==2) || (nums[i]==2 && nums[j]==1))
                {
                    Min=min(abs(i-j),Min);
                }
            }
        }
        if(Min==INT_MAX)
        {
            return -1;
        }
        return Min;
    }
};