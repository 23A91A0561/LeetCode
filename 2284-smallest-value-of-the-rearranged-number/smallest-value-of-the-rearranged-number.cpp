class Solution {
public:
    long long smallestNumber(long long num) {
        string s;
        if(num>=0)
        {
            s=to_string(num);
            sort(s.begin(),s.end());
            if(s[0]=='0')
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]!='0')
                    {
                        swap(s[i],s[0]);
                        break;
                    }
                }
            }
        }
        else
        {
            num=-1*num;
            s=to_string(num);
            sort(s.begin(),s.end());
            s+='-';
            reverse(s.begin(),s.end());
        }
        return stoll(s);
    }
};