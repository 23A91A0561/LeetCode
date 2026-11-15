class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd=0;
        int even=0;
        long long ans=0;
        int sum=0;
        int Mod=1000000007;
        for(auto &i:arr)
        {
            sum+=i;
            if(sum%2==0)
            {
                ans=(ans+odd)%Mod;
                even++;
            }
            else
            {
                ans=(even+1+ans)%Mod;
                odd++;
            }
        }
        return ans;
    }
};