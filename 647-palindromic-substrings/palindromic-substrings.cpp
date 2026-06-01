class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(i==j)
                {
                    dp[i][j]=1;
                }
            }
        }
        int count=s.size();
        for(int i=s.size()-2;i>=0;i--)
        {
            for(int j=s.size()-1;j>i;j--)
            {
                if(j-i>1)
                {
                    if(dp[i+1][j-1]==1 && s[i]==s[j])
                    {
                        dp[i][j]=1;
                        count++;
                    }
                    else
                    {
                        dp[i][j]=0;
                    }
                }
                else
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j]=1;
                        count++;
                    }
                    else
                    {
                        dp[i][j]=0;
                    }
                }
            }
        }
        return count;
    }
};