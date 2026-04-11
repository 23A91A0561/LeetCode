class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>m;
        for(auto &i:s)
        {
            m[i]++;
        }
        vector<int>check;
        for(auto &i:m)
        {
            if((i.first-'0')!=i.second)
            {
                check.push_back(i.first);
            }
        }
        for(auto &i:check)
        {
            m.erase(i);
        }
        string ans="";
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1] && m.find(s[i])!=m.end() && m.find(s[i+1])!=m.end())
            {
                ans+=s[i];
                ans+=s[i+1];
                return ans;
            }
        }
        return ans;
    }
};