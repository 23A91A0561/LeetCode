class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        string temp="";
        for(int i=0;i<k;i++)
        {
            temp+=s[i];
        }
        int c=0;
        if(stoi(temp)!=0 && num%stoi(temp)==0)
        {
            c++;
        }
        for(int i=k;i<s.size();i++)
        {
            temp.erase(temp.begin());
            temp+=s[i];
            if(stoi(temp)!=0 && num%stoi(temp)==0)
            {
                c++;
            }
        }
        return c;
    }
};