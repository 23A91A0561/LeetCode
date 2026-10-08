class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int r1=source[0];
        int c1=source[1];
        int r2=target[0];
        int c2=target[1];
        if(r1==r2 && c1==c2)
        {
            return 0;
        }
        else if(r1==r2 || c1==c2 || abs(r1-r2)==abs(c1-c2))
        {
            return 1;
        }
        return 2;
    }
};