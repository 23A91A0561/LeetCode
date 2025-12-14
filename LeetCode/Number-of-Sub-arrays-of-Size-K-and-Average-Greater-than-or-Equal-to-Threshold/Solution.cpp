1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        double sum=0;
5        for(int i=0;i<k;i++)
6        {
7            sum+=arr[i];
8        }
9        int c=0;
10        for(int i=k;i<arr.size();i++)
11        {
12            double result=sum/k;
13            if(result>=threshold)
14            {
15                c++;
16            }
17            sum-=arr[i-k];
18            sum+=arr[i];
19        }
20        if(sum/k>=threshold)
21        {
22            c++;
23        }
24        return c;
25    }
26};