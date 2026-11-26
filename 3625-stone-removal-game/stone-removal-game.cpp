class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;
        bool ans=false;
        while(n>=stone)
        {
            ans=!ans;
            n-=stone;
            stone--;
        }
        return ans;
    }
};