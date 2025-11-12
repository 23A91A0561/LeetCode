class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string>m;
        for(auto &i:paths)
        {
            m[i[0]]=i[1];
        }
        string ch=m.begin()->first;
        while(m.find(ch)!=m.end())
        {
            ch=m[ch];
        }
        return ch;
    }
};