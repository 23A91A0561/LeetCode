1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        sort(arr.begin(),arr.end());
5        int k=abs(arr[1]-arr[0]);
6        vector<vector<int>>v;
7        for(int i=0;i<arr.size()-1;i++)
8        {
9            k=min(k,abs(arr[i+1]-arr[i]));
10        }
11        for(int i=0;i<arr.size()-1;i++)
12        {
13            if(abs(arr[i+1]-arr[i])==k)
14            {
15                v.push_back({arr[i],arr[i+1]});
16            }
17        }
18        return v;
19    }
20};