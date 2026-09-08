class Solution {
public:
    int countCommas(int n) {
        int c=0;
        int nom=n;
        while(n!=0)
        {
            c++;
            n/=10;
        }
        if(c>3)
        {
            return nom-999;
        }
        return 0;
    }
};