bool check(int n)
{
    int c=0;
    int temp=n;
    while(n!=0)
    {
        c=n%10;
        if(c==0 || temp%c!=0)
        {
            return false;
        }
        n/=10;
    }
    return true;
}
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            if(check(i))
            {
                v.push_back(i);
            }
        }
        return v;
    }
};