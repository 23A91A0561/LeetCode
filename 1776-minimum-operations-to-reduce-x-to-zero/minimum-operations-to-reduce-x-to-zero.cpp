class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        map<int,int>m1,m2;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            m1[sum]=i+1;
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=nums[i];
            m2[sum]=n-i;
        }
        int Min=INT_MAX;
        for(auto &i:m1)
        {
            if(i.first==x)
            {
                Min=min(Min,i.second);
            }
        }
        for(auto &i:m2)
        {
            if(i.first==x)
            {
                Min=min(Min,i.second);
            }
        }
       
        for(auto &i:m1)
        {
            if(m2.find(x-i.first)!=m2.end() && m1[i.first]+m2[x-i.first]<=n)
            {
                Min=min(Min,m1[i.first]+m2[x-i.first]);
            }
        }
        for(auto &i:m2)
        {
            if(m1.find(x-i.first)!=m1.end() && m2[i.first]+m1[x-i.first]<=n)
            {
                Min=min(Min,m2[i.first]+m1[x-i.first]);
            }
        }
        if(Min==INT_MAX)
        {
            return -1;
        }
        return Min;
    }
};