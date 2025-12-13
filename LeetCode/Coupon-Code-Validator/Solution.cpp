1bool check(string s)
2{
3    if(s.size()==0)
4    {
5        return false;
6    }
7    for(auto &i:s)
8    {
9        if((i>='A' && i<='Z') || (i>='a' && i<='z')||(i>='0' && i<='9') || (i=='_'))
10        {
11            continue;
12        }
13        else
14        {
15            return false;
16        }
17    }
18    return true;
19}
20class Solution {
21public:
22    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
23        unordered_map<string,int>s={{"electronics",1},{"grocery",2},{"pharmacy",3},{"restaurant",4}};
24        vector<pair<string,string>>v;
25        for(int i=0;i<code.size();i++)
26        {
27            if(check(code[i]) && s.find(businessLine[i])!=s.end() && isActive[i])
28            {
29                v.push_back({code[i],businessLine[i]});
30            }
31        }
32        sort(v.begin(),v.end(),[&](auto &a,auto &b){
33            if(s[a.second]==s[b.second])
34            {
35                return a.first<b.first;
36            }
37            return s[a.second]<s[b.second];
38        });
39        vector<string>ans;
40        for(auto &i:v)
41        {
42            ans.push_back(i.first);
43        }
44        return ans;
45    }
46};