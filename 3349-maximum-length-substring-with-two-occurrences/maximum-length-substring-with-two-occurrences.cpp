class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>m;
        int l=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            while(m[s[i]]>2)
            {
                m[s[l]]--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};