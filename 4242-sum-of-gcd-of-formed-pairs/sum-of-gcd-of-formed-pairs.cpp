class Solution {
public:
    int gcd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>maxarr(n);
        maxarr[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            maxarr[i]=max(maxarr[i-1],nums[i]);
        }
        vector<int>pref(n);
        for(int i=0;i<n;i++)
        {
            pref[i]=gcd(nums[i],maxarr[i]);
        }
        
        sort(pref.begin(),pref.end());
        long long sum=0;
        for(int i=0;i<pref.size()/2;i++)
        {
            sum+=gcd(pref[i],pref[n-i-1]);
        }
        return sum;
    }
};