class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>m={{'a',1},{'b',1},{'l',2},{'o',2},{'n',1}};
        map<char,int>m1;
        for(auto &i:text)
        {
            m1[i]++;
        }
        int Min=INT_MAX;
        for(auto &i:m)
        {
            Min=min(Min,m1[i.first]/m[i.first]);
        }
        return Min;
    }
};