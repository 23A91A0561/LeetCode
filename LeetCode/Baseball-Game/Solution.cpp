1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        stack<int>s;
5        for(auto &i:operations)
6        {
7            if(i=="+")
8            {
9                int sum=s.top();
10                int k=sum;
11                s.pop();
12                sum+=s.top();
13                s.push(k);
14                s.push(sum);
15            }
16            else if(i=="D")
17            {
18                s.push(2*s.top());
19            }
20            else if(i=="C")
21            {
22                s.pop();
23            }
24            else
25            {
26                s.push(stoi(i));
27            }
28        }
29        int sum=0;
30        while(!s.empty())
31        {
32            sum+=s.top();
33            s.pop();
34        }
35        return sum;
36    }
37};