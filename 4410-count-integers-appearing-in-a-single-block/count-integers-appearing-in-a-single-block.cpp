class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int>store(101,-2);
        for(int i=0;i<nums.size();i++)
        {
            if(store[nums[i]]==-2)
            {
                store[nums[i]]=i;
            }
            else
            {
                if(store[nums[i]]==i-1)
                {
                    store[nums[i]]=i;
                }
                else
                {
                    store[nums[i]]=-1;
                }
            }
        }
        int ans=0;
        for(auto &i:store)
        {
            if(i>=0)
            {
                ans++;
            }
        }
        return ans;
    }
};