class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int l=0;
        int ans=0,one=0,zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            if(s[i]=='0')
            {
                zero++;
            }
            while(one>k && zero>k)
            {
                if(s[l]=='0')
                {
                    zero--;
                }
                else{
                    one--;
                }
                l++;
            }
            ans+=i-l+1;
        }
        return ans;
    }
};