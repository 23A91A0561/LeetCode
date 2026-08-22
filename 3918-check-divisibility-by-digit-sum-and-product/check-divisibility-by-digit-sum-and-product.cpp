class Solution {
public:
    bool checkDivisibility(int n) {
        int N=n;
        int sum=0,pro=1;
        while(n!=0)
        {
            int temp=n%10;
            sum+=temp;
            pro*=temp;
            n/=10;
        }
        return N%(sum+pro)==0;
    }
};