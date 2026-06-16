class Solution {
public:
    string processStr(string s) {
        string result="";
        for(auto &i:s)
        {
            if(i>='a' && i<='z')
            {
                result+=i;
            }
            else if(i=='*')
            {
                if(result.size()!=0)
                {
                    result.pop_back();
                }
            }
            else if(i=='#')
            {
                result+=result;
            }
            else
            {
                reverse(result.begin(),result.end());
            }
        }
        return result;
    }
};