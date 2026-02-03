class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        bool ans=false;
        int i=0;
        int c=0;
        while(i<=nums.size()-2 && nums[i]<nums[i+1])
        {
            i++;
            ans=true;
        }
        if(ans)
        {
            c++;
        }
        ans=false;
        while(i<=nums.size()-2 && nums[i]>nums[i+1])
        {
            i++;
            ans=true;
        }
        if(ans)
        {
            c++;
        }
        ans=false;
        while(i<=nums.size()-2 && nums[i]<nums[i+1])
        {
            i++;
            ans=true;
        }
        if(ans)
        {
            c++;
        }
        return c==3 && nums.size()-1==i;
    }
};