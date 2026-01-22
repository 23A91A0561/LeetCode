1class Solution {
2public:
3    bool isSort(vector<int>& arr)
4    {
5        for(int i=1;i<arr.size();i++)
6        {
7            if(arr[i]<arr[i-1])
8            {
9                return true;
10            }
11        }
12        return false;
13    }
14    int minimumPairRemoval(vector<int>& nums) {
15        int c=0;
16        while(nums.size()>1 && isSort(nums))
17        {
18            int Min=INT_MAX;
19            int j=0;
20            for(int i=0;i+1<nums.size();i++)
21            {
22                int sum=nums[i]+nums[i+1];
23                if(sum<Min)
24                {
25                    Min=sum;
26                    j=i;
27                }
28            }
29            nums.erase(nums.begin()+j,nums.begin()+j+2);
30            nums.insert(nums.begin()+j,Min);
31            c++;
32        }
33        return c;
34    }
35};