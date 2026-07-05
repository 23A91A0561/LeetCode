class Solution {
public:
    int check(int a)
    {
        if (a == 0) return 0;
        int l=INT_MIN;
        int s=INT_MAX;
        while(a!=0)
        {
            l=max(l,a%10);
            s=min(s,a%10);
            a/=10;
        }
        return l-s;
    }
    int maxDigitRange(vector<int>& nums) {
        map<int,int>m;
        int ans=0;
        for(auto &i:nums)
        {
            m[check(i)]+=i;
        }
        return m.rbegin()->second;
    }
};