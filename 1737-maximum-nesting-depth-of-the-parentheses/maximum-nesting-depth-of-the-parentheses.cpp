class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0;
        for(auto &i:s)
        {
            if(i=='(')
            {
                st.push(i);
            }
            else if(i==')')
            {
                st.pop();
            }
            ans=max((int)st.size(),ans);
        }
        return ans;
    }
};