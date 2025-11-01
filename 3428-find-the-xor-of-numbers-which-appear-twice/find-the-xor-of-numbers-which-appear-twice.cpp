class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int>s;
        int sum=0;
        for(auto &i:nums)
        {
            if(s.find(i)!=s.end())
            {
                sum^=i;
            }
            s.insert(i);
        }
        return sum;
    }
};