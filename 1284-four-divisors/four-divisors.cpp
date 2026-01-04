class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto &j:nums)
        {
            int sum=0,c=0;
            for(int i=1;i*i<=j;i++)
            {
               if(j%i==0)
               {
                c++;
                sum+=i;
                if(j/i!=i)
                {
                    sum+=j/i;
                    c++;
                }
               }
               if(c>4)
               {
                break;
               }
            }
            if(c==4)
            {
                ans+=sum;
            }
        }
        return ans;
    }
};