class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0;
        map<char,int>m;
        int n=s.size();
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            while(m.size()>=3)
            {
                ans+=n-i;
                m[s[l]]--;
                if(m[s[l]]==0)
                {
                    m.erase(s[l]);
                }
                l++;
            }
        }
        return ans;
    }
};