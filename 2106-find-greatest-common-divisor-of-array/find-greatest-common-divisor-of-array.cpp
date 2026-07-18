class Solution {
public:
    
    int findGCD(vector<int>& nums) {
        int Max=*max_element(nums.begin(),nums.end());
        int Min=*min_element(nums.begin(),nums.end());
        return gcd(Min,Max);
    }
};