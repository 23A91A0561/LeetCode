1class Solution {
2public:
3    int getLeastFrequentDigit(int n) {
4        map<int,int>m;
5        while(n!=0)
6        {
7            m[n%10]++;
8            n/=10;
9        }
10        int temp=0;
11        int Max=INT_MAX;
12        for(auto &i:m)
13        {
14            if(i.second<Max)
15            {
16                Max=i.second;
17                temp=i.first;
18            }
19            else if(i.second==Max)
20            {
21                temp=min(temp,i.first);
22            }
23        }
24        return temp;
25    }
26};