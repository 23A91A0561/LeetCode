class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        map<char,int>m;
        int ans=0;
        int maxf=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            maxf=max(m[s[i]],maxf);
            while(i-l+1-maxf>k)
            {
                m[s[l]]--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};