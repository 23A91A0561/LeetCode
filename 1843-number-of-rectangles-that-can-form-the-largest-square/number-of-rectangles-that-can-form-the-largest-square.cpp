class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int,int>m;
        for(auto &i:rectangles)
        {
            m[min(i[0],i[1])]++;
        }
        auto it=m.end();
        --it;
        return it->second;
    }
};