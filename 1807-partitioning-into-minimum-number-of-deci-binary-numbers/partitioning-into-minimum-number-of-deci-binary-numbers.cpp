class Solution {
public:
    int minPartitions(string n) {
        int Max=0;
        for(auto &i:n)
        {
            if(i-'0'>Max)
            {
                Max=i-'0';
            }
        }
        return Max;
    }
};