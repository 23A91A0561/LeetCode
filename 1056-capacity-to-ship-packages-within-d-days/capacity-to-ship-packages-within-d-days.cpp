class Solution {
public:
    int check(vector<int>& weights,int shipSize)
    {
        int sum=0,days=1;
        for(auto &i:weights)
        {
            sum+=i;
            if(sum>shipSize)
            {
                days++;
                sum=i;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(auto &i:weights)
        {
            sum+=i;
        }
        int l=*max_element(weights.begin(),weights.end());
        int h=sum;
        int ans=0;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(check(weights,m)<=days)
            {
                ans=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};