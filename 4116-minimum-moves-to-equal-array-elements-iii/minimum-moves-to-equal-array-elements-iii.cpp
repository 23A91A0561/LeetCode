class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int Max=*max_element(nums.begin(),nums.end());
        for(auto &i:nums)
        {
            sum+=Max-i;
        }
        return sum;
    }
};