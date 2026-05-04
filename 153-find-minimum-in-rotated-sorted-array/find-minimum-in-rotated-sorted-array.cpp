class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        int Min=INT_MAX;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]<nums[h])
            {
                Min=min(Min,nums[m]);
                h=m-1;
            }
            else
            {
                Min=min(Min,nums[h]);
                l=m+1;
            }
        }
        return Min;
    }
};