1class Solution {
2public:
3    void put(int n,vector<int>& v)
4    {
5        int c=3;
6        while(n!=0)
7        {
8            v[c--]=n%10;
9            n/=10;
10        }
11    }
12    int generateKey(int num1, int num2, int num3) {
13        vector<int>n1(4,0),n2(4,0),n3(4,0);
14        put(num1,n1);
15        put(num2,n2);
16        put(num3,n3);
17        int temp=1000;
18        int sum=0;
19        for(int i=0;i<4;i++)
20        {
21            sum+=min(n1[i],min(n2[i],n3[i]))*temp;
22            temp/=10;
23        }
24        return sum;
25    }
26};