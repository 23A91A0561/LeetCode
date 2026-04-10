class Solution {
public:
    bool checkDivisibility(int n) {
        int t=n;
        int sum=0,product=1;
        while(n!=0)
        {
            sum+=n%10;
            product*=n%10;
            n/=10;
        }
        cout <<sum <<" " <<product;
        if(t%(sum+product))
        {
            return false;
        }
        return true;
    }
};