1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4        int sum=0;
5        // for(int i=0;i<arr.size();i++)
6        // {
7        //     for(int j=i;j<arr.size();j++)
8        //     {
9        //         if((j-i)%2==0)
10        //         {
11        //             for(int k=i;k<=j;k++)
12        //             {
13        //                 sum+=arr[k];
14        //             }
15        //         }
16        //     }
17        // }
18        
19        for(int i=1;i<arr.size();i++)
20        {
21            arr[i]=arr[i]+arr[i-1];
22        }
23        for(int i=0;i<arr.size();i++)
24        {
25            for(int j=i;j<arr.size();j++)
26            {
27                if((j-i)%2==0)
28                {
29                    if(i==0)
30                    {
31                        sum+=arr[j];
32                    }
33                    else
34                    {
35                        sum+=arr[j]-arr[i-1];
36                    }
37                }
38            }
39        }
40        return sum;
41    }
42};