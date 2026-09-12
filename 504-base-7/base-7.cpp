class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
        {
            return "0";
        }
        string s="";
        int n=num;
        num=abs(num);
        while(num!=0)
        {
            s+=to_string(num%7);
            num/=7;
        }
        if(n<0)
        {
            s+='-';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};