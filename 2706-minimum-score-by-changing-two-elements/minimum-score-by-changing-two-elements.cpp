class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        return min(nums[n]-nums[2],min(nums[n-1]-nums[1],nums[n-2]-nums[0]));
    }
};