class Solution {
public:
    bool checkString(string s) {
        int b=false;
        for(auto &i:s)
        {
            if(i=='b')
            {
                b=true;
            }
            if(i=='a' && b==true)
            {
                return false;
            }
        }
        return true;
    }
};