class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long sum=0,digit=0;
        int c=0;
        for(auto &i:s)
        {
            if(i!='0')
            {
                c=i-'0';
                sum+=c;
                digit=digit*10+c;
            }
        }
        return digit*sum;
    }
};