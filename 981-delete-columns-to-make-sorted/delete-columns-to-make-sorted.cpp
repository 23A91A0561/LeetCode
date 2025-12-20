class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=0;
        for(int i=0;i<strs[0].size();i++)
        {
            string st="";
            for(int j=0;j<strs.size();j++)
            {
                st+=strs[j][i];
            }
            string s=st;
            sort(s.begin(),s.end());
            if(st!=s)
            {
                c++;
            }
        }
        return c;
    }
};