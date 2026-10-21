class Solution {
public:
    int minOperations(string s) {
        string fake=s;
        int n=s.size();
        sort(fake.begin(),fake.end());
        map<char,int>m;
        for(auto &i:s)
        {
            m[i]++;
        }
        if(fake==s)
        {
            return 0;
        }
        else if(fake.size()==2)
        {
            return -1;
        }
        else if(s[0]==fake[0] || s[n-1]==fake[n-1])
        {
            return 1;
        }
        else if(s[0]==fake[n-1] && s[n-1]==fake[0])
        {
            if(m[s[0]]==1 && m[s[n-1]]==1)
            {
                return 3;
            }
            return 2;
        }
        return 2;
    }
};