class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int>s;
        for(auto &i:nums)
        {
            s.insert(i);
        }
        int Min=*min_element(nums.begin(),nums.end());
        int Max=*max_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=Min;i<=Max;i++)
        {
            if(s.find(i)==s.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};