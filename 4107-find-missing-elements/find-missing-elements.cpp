class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int Min=INT_MAX,Max=0;
        set<int>s;
        vector<int>v;
        for(auto &i:nums)
        {
            Min=min(Min,i);
            Max=max(Max,i);
            s.insert(i);
        }
        for(int i=Min;i<=Max;i++)
        {
            if(s.find(i)==s.end())
            {
                v.push_back(i);
            }
        }
        return v;
    }
};