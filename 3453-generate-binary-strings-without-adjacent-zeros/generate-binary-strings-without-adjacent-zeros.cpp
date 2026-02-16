class Solution {
public:
    vector<string>ans;
    void rec(string s,int n)
    {
        if(s.size()==n)
        {
            ans.push_back(s);
            return;
        }
        if(s[s.size()-1]=='0')
        {
            rec(s+'1',n);
        }
        else
        {
            rec(s+'0',n);
            rec(s+'1',n);
        }
    }
    vector<string> validStrings(int n) {
        rec("1",n);
        rec("0",n);
        return ans;
    }
};