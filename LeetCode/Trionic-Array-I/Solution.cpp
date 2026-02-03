1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        bool ans=false;
5        int i=0;
6        int c=0;
7        while(i<=nums.size()-2 && nums[i]<nums[i+1])
8        {
9            i++;
10            ans=true;
11        }
12        if(ans)
13        {
14            c++;
15        }
16        ans=false;
17        while(i<=nums.size()-2 && nums[i]>nums[i+1])
18        {
19            i++;
20            ans=true;
21        }
22        if(ans)
23        {
24            c++;
25        }
26        ans=false;
27        while(i<=nums.size()-2 && nums[i]<nums[i+1])
28        {
29            i++;
30            ans=true;
31        }
32        if(ans)
33        {
34            c++;
35        }
36        return c==3 && nums.size()-1==i;
37    }
38};