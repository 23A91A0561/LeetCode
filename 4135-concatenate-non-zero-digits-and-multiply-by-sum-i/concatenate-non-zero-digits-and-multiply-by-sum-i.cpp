class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)
        {
            return 0;
        }
        int i=1;
        long long ans=0;
        long long sum=0;
        while(n!=0)
        {
            if(n%10!=0)
            {
                ans+=(n%10)*i;
                i*=10;
                sum+=n%10;
            }
            n/=10;
        }
        return sum*ans;
    }
};