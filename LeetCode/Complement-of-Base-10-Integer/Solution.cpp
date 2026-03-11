1class Solution {
2public:
3    int bitwiseComplement(int n) {
4        if(n==0) return 1;
5        vector<int>arr;
6        while(n!=0)
7        {
8            arr.push_back(n%2);
9            n/=2;
10        }
11        for(auto &i:arr)
12        {
13            if(i==0)
14            {
15                i=1;
16            }
17            else
18            {
19                i=0;
20            }
21        }
22        int sum=0;
23        for(int i=0;i<arr.size();i++)
24        {
25            sum+=arr[i]*pow(2,i);
26        }
27        return sum;
28    }
29};