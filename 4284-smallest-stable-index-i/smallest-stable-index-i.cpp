class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int Max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            Max=max(nums[i],Max);
            int Min=INT_MAX;
            for(int j=i;j<nums.size();j++)
            {
                Min=min(Min,nums[j]);
            }
            if(Max-Min<=k)
            {
                return i;
            }
        }
        return -1;
    }
};