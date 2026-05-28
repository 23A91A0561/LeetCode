1class Solution {
2public:
3    vector<vector<int>> permute(vector<int>& nums) {
4        vector<vector<int>>ans;
5        sort(nums.begin(),nums.end());
6        do{
7            ans.push_back(nums);
8        }while(next_permutation(nums.begin(),nums.end()));
9        return ans;
10    }
11};