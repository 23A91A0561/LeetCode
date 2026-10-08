class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans="";
        int c=0;
        for(auto &i:s)
        {
            if(i=='(')
            {
                c++;
                if(c>1)
                {
                    ans+='(';
                }
            }
            else
            {
                if(c>1)
                {
                    ans+=')';
                }
                c--;
            }
        }
        return ans;
    }
};