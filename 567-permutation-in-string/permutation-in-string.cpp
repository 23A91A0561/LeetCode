class Solution {
public:
    bool check(vector<int>& f1,vector<int>& f2)
    {
        for(int i=0;i<f1.size();i++)
        {
            if(f1[i]!=f2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int l=0;
        vector<int>freq1(26,0),freq2(26,0);
        for(auto &i:s1)
        {
            freq1[i-'a']++;
        }
        for(int i=0;i<s2.size();i++)
        {
            freq2[s2[i]-'a']++;
            if(i-l+1>s1.size())
            {
                freq2[s2[l]-'a']--;
                l++;
            }
            if(check(freq1,freq2))
            {
                return true;
            }
        }
        return false;
    }
};