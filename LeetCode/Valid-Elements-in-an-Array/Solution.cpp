1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        int n=nums.size();
5        if(n<3)
6        {
7            return nums;
8        }
9        vector<int>arr1(n),arr2(n);
10        int Max=nums[0];
11        for(int i=0;i<nums.size();i++)
12        {
13            Max=max(nums[i],Max);
14            arr1[i]=Max;
15        }
16        Max=nums[n-1];
17        for(int i=n-1;i>=0;i--)
18        {
19            Max=max(nums[i],Max);
20            arr2[i]=Max;
21        }
22        vector<int>ans;
23        ans.push_back(nums[0]);
24        for(int i=1;i<n-1;i++)
25        {
26            if(arr1[i-1]<nums[i] || arr2[i+1]<nums[i])
27            {
28                ans.push_back(nums[i]);
29            }
30        }
31        ans.push_back(nums[n-1]);
32        return ans;
33    }
34};