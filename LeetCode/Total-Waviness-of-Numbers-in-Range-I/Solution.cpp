1class Solution {
2public:
3    int check(int n)
4    {
5        if(n<=100)
6        {
7            return 0;
8        }
9        int pre=n%10;
10        n/=10;
11        int cur=n%10;
12        n/=10;
13        int c=0;
14        while(n!=0)
15        {
16            int next=n%10;
17            if((cur>pre && cur>next)||(cur<pre && cur<next))
18            {
19                c++;
20            }
21            pre=cur;
22            cur=next;
23            n/=10;
24        }
25        return c;
26    }
27    int totalWaviness(int num1, int num2) {
28        int ans=0;
29        for(int i=num1;i<=num2;i++)
30        {
31            ans+=check(i);
32        }
33        return ans;
34    }
35};