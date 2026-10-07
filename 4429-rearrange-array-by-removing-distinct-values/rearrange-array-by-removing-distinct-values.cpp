class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>m;
        for(auto &i:nums)
        {
            m[i]++;
        }
        vector<int>ans;
        while(m.size()!=0)
        {
            auto i=m.begin();
            while(i!=m.end())
            {
                ans.push_back(i->first);
                i->second--;
                if(i->second==0)
                {
                    i=m.erase(i);
                }
                else
                {
                    i++;
                }
            }
        }
        return ans;
    }
};