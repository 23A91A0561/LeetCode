1class Solution {
2public:
3    vector<vector<int>>ans;
4    void backtrack(vector<int>& candidates,int target,vector<int> candidate,int total,int start)
5    {
6        if(total==target)
7        {
8            ans.push_back(candidate);
9            return;
10        }
11        if(total>target)
12        {
13            return;
14        }
15        for(int i=start;i<candidates.size();i++)
16        {
17            candidate.push_back(candidates[i]);
18            backtrack(candidates,target,candidate,total+candidates[i],i);
19            candidate.pop_back();
20        }
21    }
22    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
23        backtrack(candidates,target,{},0,0);
24        return ans;
25    }
26};