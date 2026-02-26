class Solution {
public:
    string check(string s)
    {
        int carry=1;
        string ans="";
        reverse(s.begin(),s.end());
        for(auto &i:s)
        {
            if(carry==1)
            {
                if(i=='1')
                {
                    ans+='0';
                }
                else
                {
                    ans+='1';
                    carry=0;
                }
            }
            else
            {
                ans+=i;
            }
        }
        if(carry==1)
        {
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int numSteps(string s) {
        int ans=0;
        while(s.size()!=1)
        {
            if(s[s.size()-1]=='1')
            {
                s=check(s);
                ans++;
            }
            s.pop_back();
            ans++;
        }
        return ans;
    }
};