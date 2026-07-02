class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        unordered_set<int>s;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])==s.end())
            {
                ans.push_back(nums[i]);
                k--;
            }
            s.insert(nums[i]);
            if(k==0)
            {
                break;
            }
        }
        return ans;
    }
};