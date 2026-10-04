class Solution {
public:
    bool checkValidString(string s) {
        stack<int>op,star;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                op.push(i);
            }
            else if(s[i]=='*')
            {
                star.push(i);
            }
            else
            {
                if(op.size()>0)
                {
                    op.pop();
                }
                else if(star.size()>0)
                {
                    star.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        while(!op.empty() && !star.empty())
        {
            if(op.top()>star.top())
            {
                return false;
            }
            op.pop();
            star.pop();
        }
        return op.empty();
    }
};