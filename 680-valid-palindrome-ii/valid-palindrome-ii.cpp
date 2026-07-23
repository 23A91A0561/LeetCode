class Solution {
public:
    bool pal(string& s,int l,int h)
    {
        while(l<h)
        {
            if(s[l]!=s[h])
            {
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,h=s.size()-1;
        int count=0;
        while(l<=h)
        {
            if(s[l]!=s[h])
            {
                count++;
                if(pal(s,l+1,h))
                {
                    l++;
                }
                else if(pal(s,l,h-1))
                {
                    h--;
                }
            }
            if(s[l]!=s[h] || count>1)
            {
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
};