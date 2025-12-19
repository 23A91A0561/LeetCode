class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>st;
        for(auto &i:s)
        {
            st[i]++;
        }
        char ans;
        for(auto &i:t)
        {
            st[i]--;
        }
        for(auto &i:st)
        {
            if(i.second<0)
            {
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};