1class Solution {
2public:
3    vector<int> scoreValidator(vector<string>& events) {
4        int score=0,counter=0;
5        for(auto &i:events)
6        {
7            if(i[0]>='0' && i[0]<='9')
8            {
9                score+=i[0]-'0';
10            }
11            else
12            {
13                if(i.size()>1)
14                {
15                    score++;
16                }
17                else
18                {
19                    counter++;
20                }
21            }
22            if(counter==10)
23            {
24                return {score,counter};
25            }
26        }
27        return {score,counter};
28    }
29};