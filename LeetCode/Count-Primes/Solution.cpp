1class Solution {
2public:
3    int countPrimes(int n) {
4        if(n<=2)
5        {
6            return 0;
7        }
8        vector<bool>prime(n,true);
9        prime[0]=false;
10        prime[1]=false;
11        for(int i=2;i*i<n;i++)
12        {
13            if(prime[i])
14            {
15                for(int j=i+i;j<n;j+=i)
16                {
17                    prime[j]=false;
18                }
19            }
20        }
21        int count=0;
22        for(int i=0;i<n;i++)
23        {
24            if(prime[i])
25            {
26                count++;
27            }
28        }
29        return count;
30    }
31};