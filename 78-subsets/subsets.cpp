class Solution {
public:
    vector<vector<int>>ans;
    void generate(vector<int>& nums,int i,vector<int>& subset)
    {
        if(i==nums.size())
        {
            ans.push_back(subset);
            return;
        }
        generate(nums,i+1,subset);
        subset.push_back(nums[i]);
        generate(nums,i+1,subset);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        generate(nums,0,subset);
        return ans;
    }
};