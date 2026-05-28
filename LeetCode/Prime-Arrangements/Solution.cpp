1class Solution {
2public:
3    bool prime(int a)
4    {
5        if(a<=1)
6        {
7            return false;
8        }
9        if(a==2)
10        {
11            return true;
12        }
13        for(int i=2;i<a;i++)
14        {
15            if(a%i==0)
16            {
17                return false;
18            }
19        }
20        return true;
21    }
22    int numPrimeArrangements(int n) {
23        // vector<bool>prime(n,true);
24        // prime[0]=false;
25        // prime[1]=false;
26        // for(int i=2;i*i<=n;i++)
27        // {
28        //     if(prime[i]==true)
29        //     {
30        //         for(int j=i+i;j<=n;j+=i)
31        //         {
32        //             prime[j]=false;
33        //         }
34        //     }
35        // }
36        long long mod=1000000007;
37        int c=0;
38        long long ans=1;
39        for(int i=1;i<=n;i++)
40        {
41            if(prime(i))
42            {
43                c++;
44            }
45        }
46        for(int i=1;i<=c;i++)
47        {
48            ans=(ans*i)%mod;
49            cout <<ans <<endl;
50        }
51        for(int i=1;i<=n-c;i++)
52        {
53            ans=(ans*i)%mod;
54            cout <<ans <<endl;
55        }
56        return ans;
57    }
58};