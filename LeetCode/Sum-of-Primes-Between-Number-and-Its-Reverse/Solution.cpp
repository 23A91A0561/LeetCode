1class Solution {
2public:
3    int change(int n)
4    {
5        int c=0,b=0;
6        while(n!=0)
7        {
8            c=n%10;
9            b=b*10+c;
10            n/=10;
11        }
12        return b;
13    }
14    int sumOfPrimesInRange(int n) {
15        vector<bool>prime(10000,true);
16        prime[1]=false;
17        prime[0]=false;
18        for(int i=2;i*i<10000;i++)
19        {
20            if(prime[i])
21            {
22                for(int j=i+i;j<10000;j+=i)
23                {
24                    prime[j]=false;
25                }
26            }
27        }
28        int k=change(n);
29        int l=min(n,k);
30        k=max(n,k);
31        int sum=0;
32        for(int i=l;i<=k;i++)
33        {
34            cout <<i <<" ";
35            if(prime[i])
36            {
37                sum+=i;
38            }
39        }
40        return sum;
41    }
42};