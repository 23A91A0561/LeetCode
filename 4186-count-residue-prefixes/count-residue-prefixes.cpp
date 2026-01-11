class Solution {
public:
    int residuePrefixes(string s) {
        map<char,int>m;
        int length=0;
        int c=0;
        for(auto &i:s)
        {
            m[i]++;
            length++;
            if(m.size()==length%3)
            {
                c++;
            }
        }
        return c;
    }
};