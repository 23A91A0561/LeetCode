class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto &i:nums)
        {
            m[i]++;
        }
        int sum=0;
        for(auto &i:m)
        {
            if(i.second%k==0)
            {
                sum+=i.first*i.second;
            }
        }
        return sum;
    }
};