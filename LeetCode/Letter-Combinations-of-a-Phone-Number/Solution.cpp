1class Solution {
2public:
3    vector<string>ans;
4    void get(string& digits,int i,vector<string>& v,string valid)
5    {
6        if(valid.size()==digits.size())
7        {
8            ans.push_back(valid);
9            return;
10        }
11        string parent=v[digits[i]-'0'];
12        for(auto &j:parent)
13        {
14            get(digits,i+1,v,valid+j);
15        }
16    }
17    vector<string> letterCombinations(string digits) {
18        vector<string>v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
19        get(digits,0,v,"");
20        return ans;
21    }
22};