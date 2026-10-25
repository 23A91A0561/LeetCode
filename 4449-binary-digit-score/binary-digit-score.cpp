class Solution {
public:
    int set(int a)
    {
        int c=0;
        while(a!=0)
        {
            a=a&(a-1);
            c++;
        }
        return c;
    }
    int calculateScore(int a, int b) {
        int s1=set(a);
        int s2=set(b);
        if(s1>=s2)
        {
            return s1*s2;
        }
        return s2/s1;
    }
};