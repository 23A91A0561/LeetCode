class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,pair<int,int>>m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]={i,i};
            }
            else
            {
                m[nums[i]].second=i;
            }
        }
        map<int,int>frq;
        for(auto &i:nums)
        {
            frq[i]++;
        }
        int ans=0;
        int Max=0;
        for(auto &i:frq)
        {
            if(i.second>Max)
            {
               ans=m[i.first].second-m[i.first].first+1;
               Max=i.second;
            }
            else if(i.second==Max)
            {
                ans=min(ans,m[i.first].second-m[i.first].first+1);
            }
        }
        return ans;
    }
};