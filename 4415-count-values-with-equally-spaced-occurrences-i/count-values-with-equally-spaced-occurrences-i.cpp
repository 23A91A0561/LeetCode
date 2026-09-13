class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        int count=0;
        for(auto &i:m)
        {
            if(i.second.size()==3)
            {
                count+=(i.second[1]-i.second[0]==i.second[2]-i.second[1]);
            }
        }
        return count;
    }
};