1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque<int>q;
5        vector<int>ans;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(!q.empty() && q.front()<=i-k)
9            {
10                q.pop_front();
11            }
12            while(!q.empty() && nums[q.back()]<nums[i])
13            {
14                q.pop_back();
15            }
16            q.push_back(i);
17            if(i>=k-1)
18            {
19                ans.push_back(nums[q.front()]);
20            }
21        }
22        return ans;
23    }
24};