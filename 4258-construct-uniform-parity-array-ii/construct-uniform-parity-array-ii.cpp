class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int e=INT_MAX,o=INT_MAX;
        for(auto &i:nums1)
        {
            if(i%2==0)
            {
                e=min(e,i);
            }
            else
            {
                o=min(o,i);
            }
            
        }
        if(e==INT_MAX || o==INT_MAX)
        {
            return true;
        }
        return o<e;
    }
};