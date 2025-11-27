class Solution {
public:
    int minOperations(string s) {
        int f=0,se=0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                if(s[i]!='0')
                {
                    f++;
                }
                else
                {
                    se++;
                }
            }
            else
            {
                if(s[i]!='1')
                {
                    f++;
                }
                else
                {
                    se++;
                }
            }
        }
        return min(f,se);
    }
};