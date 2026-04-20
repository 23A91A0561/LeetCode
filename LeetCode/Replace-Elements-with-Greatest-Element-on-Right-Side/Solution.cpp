1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int n=arr.size();
5        int Max=arr[n-1];
6        for(int i=n-2;i>=0;i--)
7        {
8            if(arr[i]<=Max)
9            {
10                arr[i]=Max;
11            }
12            else
13            {
14                int temp=Max;
15                Max=arr[i];
16                arr[i]=temp;
17            }
18        }
19        arr[n-1]=-1;
20        return arr;
21    }
22};