class Solution {
public:
    int check(int n,int t)
    {
        int pro=1;
        while(n>0)
        {
            pro*=(n%10);
            n/=10;
        }
        cout <<pro <<endl;
        return pro%t==0;
    }
    int smallestNumber(int n, int t) {
        // cout <<check(n)<<endl;
        while(!check(n,t))
        {
            n++;
        }
        return n;
    }
};