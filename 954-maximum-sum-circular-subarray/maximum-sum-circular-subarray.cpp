class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,sum1=0,sum2=0,Max=INT_MIN,Min=INT_MAX;
        for(auto &i:nums)
        {
            total+=i;
            sum1+=i;
            sum2+=i;
            Max=max(Max,sum1);
            Min=min(Min,sum2);
            if(sum1<0)
            {
                sum1=0;
            }
            if(sum2>0)
            {
                sum2=0;
            }
        }
        if(Max<0)
        {
            return Max;
        }
        return max(Max,total-Min);
    }
};