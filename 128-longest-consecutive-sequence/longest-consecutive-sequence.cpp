class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        set<int>s;
        for(auto &i:nums)
        {
            s.insert(i);
        }
        vector<int>v;
        for(auto &i:s)
        {
            v.push_back(i);
        }
        int Max=0,c=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1]+1)
            {
                c++;
            }
            else
            {
                Max=max(Max,c);
                c=1;
            }
        }
        Max=max(Max,c);
        return Max;
    }
};