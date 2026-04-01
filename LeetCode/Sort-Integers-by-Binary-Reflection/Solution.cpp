1class Solution {
2public:
3    int check(int a)
4    {
5        vector<int>v;
6        while(a!=0)
7        {
8            v.push_back(a%2);
9            a/=2;
10        }
11        reverse(v.begin(),v.end());
12        int j=0;
13        int ans=0;
14        for(auto &i:v)
15        {
16            ans+=i*pow(2,j++);
17        }
18        return ans;
19    }
20    vector<int> sortByReflection(vector<int>& nums) {
21        vector<pair<int,int>>v;
22        for(auto &i:nums)
23        {
24            v.push_back({i,check(i)});
25        }
26        sort(v.begin(),v.end(),[](auto a,auto b){
27            if(a.second==b.second)
28            {
29                return a.first<b.first;
30            }
31            return a.second<b.second;
32        });
33        for(int i=0;i<nums.size();i++)
34        {
35            nums[i]=v[i].first;
36        }
37        return nums;
38    }
39};