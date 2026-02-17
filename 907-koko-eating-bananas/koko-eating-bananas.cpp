class Solution {
public:
    bool check(int m,vector<int>& v,int h)
    {
        long long sum=0;
        for(auto &i:v)
        {
            sum+=ceil(i * 1.0/m);
        }
        if(sum <= h)
        {
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=INT_MIN;
        for(auto &i:piles)
        {
            high=max(high,i);
        }
        int low=1;
        while(low<=high)
        {
            int m=(low+high)/2;
            if(check(m,piles,h))
            {
                high=m-1;
            }
            else
            {
                low=m+1;
            }
        }
        return low;
    }
};