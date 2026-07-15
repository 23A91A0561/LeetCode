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
    int gcdOfOddEvenSums(int n) {
        int even=0,odd=0;
        for(int i=1;i<=2*n;i++)
        {
            if(i%2==0)
            {
                even+=i;
            }
            else
            {
                odd+=i;
            }
        }
        return gcd(odd,even);
    }
};