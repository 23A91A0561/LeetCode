class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int p1=0,p2=0,p3=0;
        int ans=0;
        int mod=1000000007;
        for(auto &i:nums)
        {
            if(i<a)
            {
                ans+=p3;
                ans+=p2;
                ans=ans%mod;
                p1++;
            }
            else if(i>b)
            {
                p3++;
            }
            else
            {
                ans+=p3;
                ans=ans%mod;
                p2++;
            }
        }
        return ans;
    }
};