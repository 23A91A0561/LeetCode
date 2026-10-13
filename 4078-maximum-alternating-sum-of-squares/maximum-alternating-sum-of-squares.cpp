class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(auto &i:nums)
        {
            i=abs(i);
        }
        if(n%2!=0)
        {
            nums.push_back(0);
            n++;
        }
        sort(nums.begin(),nums.end());
        int l=0,h=n-1;
        long long sum=0;
       
        while(l<h)
        {
            sum+=(nums[h]*nums[h])-(nums[l]*nums[l]);
            l++;
            h--;
        }
        return sum;
    }
};