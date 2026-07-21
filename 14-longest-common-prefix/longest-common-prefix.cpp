class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=201;
        for(auto &i:strs)
        {
            size=min(size,int(i.size()));
        }
        string ans="";
        for(int i=0;i<size;i++)
        {
            char temp=strs[0][i];
            for(auto &j:strs)
            {
                if(temp!=j[i])
                {
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};