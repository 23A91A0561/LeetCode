class Solution {
public:
    string winningPlayer(int x, int y) {
        int p=0;
        while(x>=1 && y>=4)
        {
            x-=1;
            y-=4;
            p++;
        }
        if(p%2==0)
        {
            return"Bob";
        }
        return "Alice";
    }
};