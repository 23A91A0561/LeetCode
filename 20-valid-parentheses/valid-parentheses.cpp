class Solution {
public:
    bool isValid(string s) {
        map<char,char>m={{')','('},{'}','{'},{']','['}};
        stack<char>st;
        for(auto &i:s)
        {
            if(i=='(' || i=='{' || i=='[')
            {
                st.push(i);
            }
            else
            {
                if(!st.empty() && st.top()==m[i])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};