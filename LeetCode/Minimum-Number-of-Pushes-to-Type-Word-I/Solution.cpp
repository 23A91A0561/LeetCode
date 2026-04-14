1class Solution {
2public:
3    int minimumPushes(string word) {
4        map<char,int>m;
5        int c=1;
6        int sum=0;
7        for(int i=0;i<word.size();i++)
8        {
9            m[word[i]]=c;
10            sum+=m[word[i]];
11            if(m.size()%8==0)
12            {
13                c++;
14            }
15        }
16        return sum;
17    }
18};