class Solution {
public:
    vector<string>ans;
    void generate(string s,int left,int right,int total)
    {
        if(s.size()==total*2)
        {
            ans.push_back(s);
            return;
        }
        if(total>left)
        {
            generate(s+'(',left+1,right,total);
        }
        if(left>right)
        {
            generate(s+')',left,right+1,total);
        }
    }
    vector<string> generateParenthesis(int n) {
        generate("",0,0,n);
        return ans;
    }
};