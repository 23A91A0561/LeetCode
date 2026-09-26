class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;
        for(auto &i:knowledge)
        {
            m[i[0]]=i[1];
        }
        bool flag=true;
        string temp="";
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                flag=false;
                continue;
            }
            if(s[i]==')')
            {
                if(m.find(temp)!=m.end())
                {
                 ans+=m[temp];
                }
                else
                {
                    ans+='?';
                }
                temp="";
                flag=true;
                continue;
            }
            if(flag)
            {
                ans+=s[i];
            }
            else
            {
                temp+=s[i];
            }
        }
        return ans;
    }
};